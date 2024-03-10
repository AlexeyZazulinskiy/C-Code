#include <stdio.h>

/*
Дано натуральное число N. Выведите все его цифры по одной, в прямом
порядке, разделяя их пробелами или новыми строками. Необходимо
реализовать рекурсивную функцию.
void print_num(int num)
Данные на входе: Одно целое неотрицательное число
Данные на выходе: Все цифры числа через пробел в прямом порядке.
Пример №1
Данные на входе: 15
Данные на выходе: 1 5
Пример №2
Данные на входе: 54321
Данные на выходе: 5 4 3 2 1
*/
void recursion (int);

int main(void){

    int a;
    scanf("%d", &a);
    recursion(a);

    return 0;
}

void recursion (int n){

    if (n >= 10) { 
        recursion(n / 10); 
    } 
printf ("%d ", n % 10);

}