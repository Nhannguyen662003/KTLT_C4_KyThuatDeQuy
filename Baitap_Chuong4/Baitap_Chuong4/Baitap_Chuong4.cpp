#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

// Function declarations
int sum_recursive(int n);
int sum_non_recursive(int n);
double sqrt_sum_recursive(int n);
double sqrt_sum_non_recursive(int n);
double fraction_sum_recursive(int n);
double fraction_sum_non_recursive(int n);
double odd_fraction_sum(int n);
int product_sum(int n);
double product_fraction_sum(int n);
int square_sum(int n);
int cumulative_sum(int n);
double alternating_fraction_sum(int n);
double factorial_expression_sum(int n);
double complex_expression_sum(int n);

int main() {
    int choice, n;

    do {
        system("cls");
        printf("Chon mot trong cac truong hop sau:\n");
        printf("1. S(n) = 1 + 2 + 3 + ... + n\n");
        printf("2. S(n) = sqrt(2) + sqrt(2 + sqrt(2 + ...)) co n dau can\n");
        printf("3. S(n) = 1/2 + 2/3 + ... + n/(n+1)\n");
        printf("4. S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n+1)\n");
        printf("5. S(n) = 1.2 + 2.3 + 3.4 + ... + n.(n+1)\n");
        printf("6. S(n) = 1/(1.2.3) + 1/(2.3.4) + ... + 1/(n.(n+1).(n+2))\n");
        printf("7. S(n) = 1^2 + 2^2 + ... + n^2\n");
        printf("8. S(n) = 1 + (1+2) + (1+2+3) + ... + (1+2+...+n)\n");
        printf("9. S(n) = (1+2)/2! + (3+4)/4! + ... + (-1)^(n+1) * ((2n-1)+(2n))/(2n)!\n");
        printf("10. S(n) = (1.2!)/(2+sqrt(3)) + (2.3!)/(3+sqrt(4)) + ... + n(n+1)! / ((n+1)+sqrt(n+2))\n");
        printf("11. S(n) = (1+sqrt(1+2)) / (2+sqrt(3!)) + ... + (n+sqrt(n+n+1)) / ((n+1)+sqrt(n+2)!)\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice != 0) {
            printf("Nhap so nguyen duong n: ");
            scanf("%d", &n);
        }

        switch (choice) {
        case 1:
            printf("Ket qua de quy: %d\n", sum_recursive(n));
            printf("Ket qua khong de quy: %d\n", sum_non_recursive(n));
            _getch();
            break;
        case 2:           
            printf("Ket qua de quy: %.2lf\n", sqrt_sum_recursive(n));
            printf("Ket qua khong de quy: %.2lf\n", sqrt_sum_non_recursive(n));
            _getch();
            break;
        case 3:
            printf("Ket qua de quy: %.2lf\n", fraction_sum_recursive(n));
            printf("Ket qua khong de quy: %.2lf\n", fraction_sum_non_recursive(n));
            _getch();
            break;
        case 4:
            printf("Ket qua: %.2lf\n", odd_fraction_sum(n));
            _getch();
            break;
        case 5:        
            printf("Ket qua: %d\n", product_sum(n));
            _getch();
            break;
        case 6:
            printf("Ket qua: %.2lf\n", product_fraction_sum(n));
            _getch();
            break;
        case 7:
            printf("Ket qua: %d\n", square_sum(n));
            _getch();
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 0:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}

// 1.
int sum_recursive(int n) {
    if (n == 1) return 1;
    return n + sum_recursive(n - 1);
}

int sum_non_recursive(int n) {
    return n * (n + 1) / 2;
}

// 2.
double sqrt_sum_recursive(int n) {
    if (n == 1) return sqrt(2);
    return sqrt(2 + sqrt_sum_recursive(n - 1));
}

double sqrt_sum_non_recursive(int n) {
    double sum = sqrt(2);
    for (int i = 1; i < n; i++) {
        sum = sqrt(2 + sum);
    }
    return sum;
}

// 3.
double fraction_sum_recursive(int n) {
    if (n == 1) return 1.0 / 2;
    return (double)n / (n + 1) + fraction_sum_recursive(n - 1);
}

double fraction_sum_non_recursive(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (double)i / (i + 1);
    }
    return sum;
}

// 4.
double odd_fraction_sum(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i + 1);
    }
    return sum;
}

// 5.
int product_sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * (i + 1);
    }
    return sum;
}

// 6.
double product_fraction_sum(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (i * (i + 1) * (i + 2));
    }
    return sum;
}

// 7.
int square_sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    return sum;
}