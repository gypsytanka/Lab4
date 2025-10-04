#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "RUS");

    int codeA, codeB;

    printf("¬ведите код сканера A: ");
    scanf("%d", &codeA);

    printf("¬ведите код сканера B: ");
    scanf("%d", &codeB);

    int a = (codeA % 2 == 0);
    int b = (codeB % 2 == 0);

    int door = (a && !b) || (!a && b);

    if (door) {
        printf("ƒверь открыта!\n");
    }
    else {
        printf("ƒверь закрыта.\n");
    }

    return 0;
}