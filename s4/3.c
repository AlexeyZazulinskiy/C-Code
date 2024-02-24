#include <stdio.h>

/*
Задача 3. Все цифры четные
Ввести целое число и определить, верно ли, что все его цифры четные
Данные на входе: Одно целое число
Данные на выходе: YES или NO
Пример №1
Данные на входе: 2684
Данные на выходе: YES
*/

int main(void)
{

    int a;
    char flag = 0;
    scanf("%d", &a);

    while(a != 0 && flag == 0){
        int othNum = a % 10;
        a = a / 10;
        if (othNum % 2 != 0) {
            flag = 1;
        }
    }

    printf("%s", flag == 0 ? "YES" : "NO");
    
    return 0;
}