#include <stdio.h>
#include <locale.h>

/*
Задача 4. Найти среднее арифметическое цифр
числа
На вход подается произвольное четырехзначное число
Нужно напечатать среднее арифметическое цифр
Данные на входе: Четырехзначное целое положительное число
Данные на выходе: Вещественное число в формате %.2f
Пример №1:
Данные на входе: 4351
Данные на выходе: 3.25
*/

int main (void) {

    setlocale(LC_ALL, "Rus");

    printf ("Введите число: \n");
    int userInput;
    scanf ("%d", &userInput);

    int n1,n2,n3,n4;
    int tmp;

    n1 = userInput%10;
    tmp = userInput/10;

    n2 = tmp%10;
    tmp = tmp/10;

    n3 = tmp%10;
    tmp = tmp/10;

    n4 = tmp%10;

    float avr = ((float)n1+n2+n3+n4)/4;

    printf ("%.2f \n",avr);

    return 0;
}