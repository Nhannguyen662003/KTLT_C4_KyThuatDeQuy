#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Hàm tính A_n theo công th?c 1: A_0 = 1; A_1 = 0; A_2 = -1; A_n = 2A_n-1 - 3A_n-2 - A_n-3
int An_formula1(int n) {
    if (n == 0) {
        return 1;
    }
    else if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return -1;
    }
    else {
        return 2 * An_formula1(n - 1) - 3 * An_formula1(n - 2) - An_formula1(n - 3);
    }
}

// Hàm tính A_n theo công th?c 2: A_1 = 1; A_2 = 2; A_3 = 3; A_n+3 = 2A_n+2 + A_n+1 - 3A_n
int An_formula2(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }
    else if (n == 3) {
        return 3;
    }
    else {
        return 2 * An_formula2(n - 1) + An_formula2(n - 2) - 3 * An_formula2(n - 3);
    }
}

int main() {
    int choice, n, result;

    while (1) {
        printf("Chon cong thuc de tinh gia tri An:\n");
        printf("1. Cong thuc 1: A_0 = 1; A_1 = 0; A_2 = -1; A_n = 2A_n-1 - 3A_n-2 - A_n-3\n");
        printf("2. Cong thuc 2: A_1 = 1; A_2 = 2; A_3 = 3; A_n+3 = 2A_n+2 + A_n+1 - 3A_n\n");
        printf("3. Thoat\n");
        printf("Nhap lua chon cua ban (1-3): ");
        scanf("%d", &choice);

        if (choice == 3) {
            printf("Thoat chuong trinh.\n");
            break;
        }

        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);

        if (n < 0) {
            printf("n phai la so nguyen khong am.\n");
            continue;
        }

        switch (choice) {
        case 1:
            result = An_formula1(n);
            printf("Gia tri A(%d) theo cong thuc 1 la: %d\n", n, result);
            break;
        case 2:
            if (n < 1) {
                printf("n phai la so nguyen duong (n >= 1) voi cong thuc 2.\n");
            }
            else {
                result = An_formula2(n);
                printf("Gia tri A(%d) theo cong thuc 2 la: %d\n", n, result);
            }
            break;
        default:
            printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    }

    return 0;
}

