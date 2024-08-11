#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Hàm tính giá trị của f(n) theo công thức đệ quy
int f(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n % 2 == 0) { // n là số chẵn, tức là n = 2k
        return 2 * f(n / 2);
    }
    else { // n là số lẻ, tức là n = 2k + 1
        return 2 * f(n / 2) + 3 * f(n / 2 + 1);
    }
}

int main() {
    int choice;
    int n;

    while (1) {
        printf("Chon tinh toan: f(1) =1; f(2n) =2f(n); f(2n+1) = 2f(n) + 3f(n+1).\n");
        printf("1. Tinh f(5)\n");
        printf("2. Thoat\n");
        printf("Nhap lua chon cua ban (1-3): ");
        scanf("%d", &choice);

        if (choice == 3) {
            printf("Thoat chuong trinh.\n");
            break;
        }

        switch (choice) {
        case 1:
            printf("Gia tri f(5) la: %d\n", f(5));
            break;
        case 2:
            break;
        default:
            printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    }

    return 0;
}
