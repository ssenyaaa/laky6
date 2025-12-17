#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>  

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ввод строки
    char s[80];
    printf("Введите строку:");
    fgets(s, 79, stdin);

    printf("\nВы ввели строку s = %s\n", s);

    int cnt = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') cnt++;
    }

    printf("\nВ ней %d пробелов\n", cnt);

    // Ожидание ввода перед завершением
    int x;
    scanf_s("%d", &x);
}//rjjfjf