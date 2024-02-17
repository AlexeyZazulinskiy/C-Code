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

int main () {
    int a;
    char sWinter[] = "Winter";
    char sSping[] = "Spring";
    char sSummer[] = "Summer";
    char sAutumn[] = "Autumn";

    scanf("%d", &a);
    if (a > 12 || a < 1) printf ("Error");
    else if (3 >= a || a == 12) printf ("%s", sWinter);
    else if (5 >= a && a >= 3) printf ("%s", sSping);
    else if (8 >= a && a >= 6) printf ("%s", sSummer);
    else printf ("%s", sAutumn);
        
    return 0;
}