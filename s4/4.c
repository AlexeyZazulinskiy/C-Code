#include <stdio.h>

/*
Задача 4. Перевернуть число
Ввести целое число и «перевернуть» его, так чтобы первая цифра стала
последней и т.д.
Данные на входе: Целое неотрицательное число
Данные на выходе: Целое неотрицательное число наоборот
Пример №1
Данные на входе: 1234
Данные на выходе: 4321
*/

int main(void)
{

    int a, finNum = 0;
    scanf("%d", &a);

    while(a > 0){
        int othNum = a % 10;
        a = a / 10;
        finNum = finNum *10 + othNum;
    }

    printf("%d", finNum);
    
    return 0;
}