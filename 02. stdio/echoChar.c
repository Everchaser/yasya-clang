/*
 * Разница от scanf и printf в том, что тут мы вводим и выводим по одному символу за раз
 * Scanf и printf по сути делают почти то же самое внутри себя
 */


#include <stdio.h>

int main () {
    char letter;
    do {
        letter = getchar();
        putchar(letter);
    } while (letter != EOF);
    /*
     * EOF = End Of File
     * Это define из stdio.h
     * Аналогичен -1 или \n
     */
}
