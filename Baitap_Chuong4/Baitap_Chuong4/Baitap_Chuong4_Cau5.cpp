#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int timUn(int a, int q, int n) {
    if (n == 1) {
        return a;
    }
    else {
        return q * timUn(a, q, n - 1);
    }
}

int main() {
    int a, q, n;

    printf("Nhap gia tri hang dau a: ");
    scanf("%d", &a);

    printf("Nhap gia tri cong boi q: ");
    scanf("%d", &q);

    printf("Nhap vi tri phan tu n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n phai la so nguyen duong.\n");
        return 1;
    }

    int Un = timUn(a, q, n);
    printf("Gia tri phan tu thu %d cua cap so nhan la: %d\n", n, Un);

    return 0;
}
