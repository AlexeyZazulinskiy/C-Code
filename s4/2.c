#include <stdio.h>

/*
Задача 2. Ровно три цифры
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.
Данные на входе: Целое положительное число
Данные на выходе: Одно слово: YES или NO
Пример №1
Данные на входе: 123
Данные на выходе: YES
*/
#define NUM 3
int main(void)
{

    int a, count = 0;
    scanf("%d", &a);

    while (a > 0){
        a = a / 10;
        count++;
    }
    
    if (count == NUM) printf("YES");
    else printf ("NO");

    return 0;
}