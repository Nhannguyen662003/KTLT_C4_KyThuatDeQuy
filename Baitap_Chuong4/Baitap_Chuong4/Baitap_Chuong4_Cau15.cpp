#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Hàm tính Yn bằng phương pháp đệ quy
int recursiveYn(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    return recursiveYn(n - 1) + 2 * recursiveYn(n - 2) + 3 * recursiveYn(n - 3);
}

// Hàm tính Yn bằng phương pháp khử đệ quy (lặp)
int iterativeYn(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;

    int Y1 = 1, Y2 = 2, Y3 = 3, Yn;

    for (int i = 4; i <= n; i++) {
        Yn = Y3 + 2 * Y2 + 3 * Y1;
        Y1 = Y2;
        Y2 = Y3;
        Y3 = Yn;
    }

    return Yn;
}

int main() {
    int n, choice;

    printf("Nhap chi so n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Chi so n phai la so nguyen duong.\n");
        return 1;
    }

    printf("Chon phuong phap tinh Yn:\n");
    printf("1. De quy\n");
    printf("2. Khong de quy\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);

    int result;

    switch (choice) {
    case 1:
        result = recursiveYn(n);
        printf("Gia tri Yn (de quy) khi n = %d la: %d\n", n, result);
        break;
    case 2:
        result = iterativeYn(n);
        printf("Gia tri Yn (khong de quy) khi n = %d la: %d\n", n, result);
        break;
    default:
        printf("Lua chon khong hop le.\n");
        return 1;
    }

    return 0;
}
