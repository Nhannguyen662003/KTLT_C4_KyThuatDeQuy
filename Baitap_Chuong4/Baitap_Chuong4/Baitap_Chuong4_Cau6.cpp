#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int U(int n) {
    if (n < 6) {
        return n;
    }
    else {
        return U(n - 5) + U(n - 4) + U(n - 3) + U(n - 2) + U(n - 1);
    }
}

int main() {
    int n;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n phai la so nguyen duong.\n");
        return 1;
    }

    int result = U(n);
    printf("Gia tri U(%d) la: %d\n", n, result);

    return 0;
}
