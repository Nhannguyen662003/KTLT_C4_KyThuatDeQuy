#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int timUn(int a, int r, int n) {
    if (n == 1) {
        return a;
    }
    else {
        return timUn(a, r, n - 1) + r;
    }
}

int main() {
    int a, r, n;

    printf("Nhap gia tri hang dau a: ");
    scanf("%d", &a);

    printf("Nhap gia tri cong sai r: ");
    scanf("%d", &r);

    printf("Nhap vi tri phan tu n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n phai la so nguyen duong.\n");
        return 1;
    }

    int Un = timUn(a, r, n);
    printf("Gia tri phan tu thu %d cua cap so cong la: %d\n", n, Un);

    return 0;
}
