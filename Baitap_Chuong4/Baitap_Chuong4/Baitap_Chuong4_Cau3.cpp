#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Nhap so nguyen duong a: ");
    scanf("%d", &a);

    printf("Nhap so nguyen duong b: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("a va b phai la so nguyen duong.\n");
        return 1;
    }

    int result = ucln(a, b);
    printf("UCLN cua %d va %d la: %d\n", a, b, result);

    return 0;
}
