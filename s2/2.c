#include <stdio.h>
#include <locale.h>

/*
Задача 2. Сумма и произведение трех чисел
Ввести три числа, найти их сумму и произведение
Нужно напечатать сумму и произведение трех чисел
Данные на входе: Три целых числа через пробел
Данные на выходе: %d+%d+%d=%d
%d*%d*%d=%d
Пример №1:
Данные на входе: 1 2 3
Данные на выходе: 1+2+3=6
1*2*3=6
*/

int main (void) {

    setlocale(LC_ALL, "Rus");

    printf ("Введите 3 числа через пробел: \n");
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    
    printf ("%d + %d + %d = %d \n", a, b, c, a+b+c);
    printf ("%d * %d * %d = %d \n", a, b, c, a*b*c);

    return 0;
}