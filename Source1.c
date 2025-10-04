#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "RUS");

    int codeA, codeB;

    printf("Введите код сканера A: ");
    scanf("%d", &codeA);

    printf("Введите код сканера B: ");
    scanf("%d", &codeB);

    int a = (codeA % 2 == 0);
    int b = (codeB % 2 == 0);

    int door = (a && !b) || (!a && b);

    if (door) {
        printf("Дверь открыта!\n");
    }
    else {
        printf("Дверь закрыта.\n");
    }

    return 0;
}