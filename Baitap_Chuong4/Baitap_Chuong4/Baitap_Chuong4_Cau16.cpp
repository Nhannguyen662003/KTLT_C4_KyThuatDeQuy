#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Hàm tính Xn bằng phương pháp đệ quy
int recursiveXn(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return recursiveXn(n - 1) + (n - 1) * recursiveXn(n - 2);
}

int main() {
    int n;

    printf("Nhap chi so n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Chi so n phai la so nguyen duong.\n");
        return 1;
    }

    int resultRec = recursiveXn(n);

    printf("Gia tri Xn (de quy) khi n = %d la: %d\n", n, resultRec);

    return 0;
}
