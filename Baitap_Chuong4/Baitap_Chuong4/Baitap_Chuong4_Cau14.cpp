#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Hàm tính tổng các số hạng từ A1 đến A(n-1) bằng cách đệ quy
int sumOfAnMinusOne(int n) {
    if (n == 1) {
        return 0; // Không có số hạng trước A1
    }
    else {
        return findAn(n - 1) + findAn(n - 1);
    }
}

// Hàm tính số hạng thứ n của dãy An bằng cách đệ quy
int findAn(int n) {
    if (n == 1) {
        return 1; // A1 = 1
    }
    else {
        // Tính tổng các số hạng từ A1 đến A(n-1)
        int sum = sumOfAnMinusOne(n);
        // Tính A(n) = n * tổng các số hạng trước đó
        return n * sum;
    }
}

int main() {
    int n;

    printf("Nhap chi so n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Chi so n phai la so nguyen duong.\n");
        return 1;
    }

    // Tính số hạng thứ n của dãy An
    int result = findAn(n);

    printf("So hang thu %d cua day An la: %d\n", n, result);

    return 0;
}
