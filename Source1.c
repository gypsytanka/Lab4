#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "RUS");

    int codeA, codeB;

    printf("������� ��� ������� A: ");
    scanf("%d", &codeA);

    printf("������� ��� ������� B: ");
    scanf("%d", &codeB);

    int a = (codeA % 2 == 0);
    int b = (codeB % 2 == 0);

    int door = (a && !b) || (!a && b);

    if (door) {
        printf("����� �������!\n");
    }
    else {
        printf("����� �������.\n");
    }

    return 0;
}