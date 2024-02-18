#include <stdio.h>

/*
Задача 4. Какое время года
Ввести номер месяца и вывести название времени года.
Данные на входе: Целое число от 1 до 12 - номер месяца.
Данные на выходе: Время года на английском: winter, spring, summer, autumn
Пример №1
Данные на входе: 4
Данные на выходе: spring
Пример №2
Данные на входе: 1
Данные на выходе: winter
*/

int main()
{
    int a;

    scanf("%d", &a);

    if (a > 12 || a < 1)
        printf("Error");
    else if (3 >= a || a == 12)
        printf("Winter");
    else if (5 >= a && a >= 3)
        printf("Spring");
    else if (8 >= a && a >= 6)
        printf("Summer");
    else
        printf("Autumn");

    return 0;
}