#include <stdio.h>

/*
Задача 5. Все счастливые числа
Ввести натуральное число и напечатать все числа от 10 до введенного числа -
у которых сумма цифр равна произведению цифр
Данные на входе: Одно натуральное число большее 10
Данные на выходе: Числа у которых сумма цифр равна произведению
цифр через пробел в порядке возрастания. Не превосходящие введенное
число.
Пример №1
Данные на входе: 200
Данные на выходе: 22 123 132
Пример №2
Данные на входе: 1000
Данные на выходе: 22 123 132 213 231 312 321
*/

int main(void)
{

    int a, flag = 0 ;
    scanf("%d", &a);

    for (int i = 10; i < a; i ++){
        int count = i, sumAdd = 0, sumMult = 1;
        
        while (count > 0){
        int othNum = count % 10;
        count = count / 10;
        sumAdd += othNum;
        sumMult *= othNum;
        }
        
        if (sumAdd == sumMult) {
            printf("%d ", i);
            flag = 1;
        }
    }
    
    if (flag == 0) printf ("No numbers");

    return 0;
}