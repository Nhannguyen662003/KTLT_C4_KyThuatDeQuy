#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int m, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= m;
    }
    return result;
}

int main() {
    int m, n;

    printf("Nhap so nguyen m: ");
    scanf("%d", &m);

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("n phai la so nguyen duong.\n");
        return 1;
    }

    int result = power(m, n);
    printf("%d^%d = %d\n", m, n, result);

    return 0;
}
