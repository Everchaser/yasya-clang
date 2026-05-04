// Выводим длину текущего буфера ввода

#include <stdio.h>

int main() {
    /*
     *int - 16 бит
     *long int - 32 бита
     *unsigned - выбрасываем отрицательное ранжирование, увеличивая в два раза число
     */
    unsigned long int nc = 0;

    while (getchar() != 'q') ++nc;

    printf("%ld\n", nc);
}