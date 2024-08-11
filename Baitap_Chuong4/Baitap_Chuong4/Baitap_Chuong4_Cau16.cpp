#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Hàm tính Xn bằng phương pháp đệ quy
int recursiveXn(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return recursiveXn(n - 1) + (n - 1) * recursiveXn(n - 2);
}

// Hàm tính Xn bằng phương pháp khử đệ quy (lặp)
int iterativeXn(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    int X1 = 1, X2 = 1, Xn;

    for (int i = 3; i <= n; i++) {
        Xn = X2 + (i - 1) * X1;
        X1 = X2;
        X2 = Xn;
    }

    return Xn;
}

int main() {
    int n, choice;

    printf("Nhap chi so n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Chi so n phai la so nguyen duong.\n");
        return 1;
    }

    printf("Chon phuong phap tinh Xn:\n");
    printf("1. De quy\n");
    printf("2. Khong de quy\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);

    int result;

    switch (choice) {
    case 1:
        result = recursiveXn(n);
        printf("Gia tri Xn (de quy) khi n = %d la: %d\n", n, result);
        break;
    case 2:
        result = iterativeXn(n);
        printf("Gia tri Xn (khong de quy) khi n = %d la: %d\n", n, result);
        break;
    default:
        printf("Lua chon khong hop le.\n");
        return 1;
    }

    return 0;
}

