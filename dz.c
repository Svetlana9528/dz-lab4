#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF8");

    int A, B, C;
    int portal_opened;

    printf("=== СИСТЕМА АКТИВАЦИИ ПОРТАЛА ===\n");
    printf("Введите три целых числа через пробел (энергия A, B, C): ");
    scanf("%d %d %d", &A, &B, &C);

    portal_opened = (A % 3 == 0 && B % 3 == 0 && C % 3 == 0);

    printf("Портал открыт (1 - да, 0 - нет): %d\n", portal_opened);

    return 0;
}