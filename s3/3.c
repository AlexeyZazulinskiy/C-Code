#include <stdio.h>

/*
Задача 3. В порядке возрастания
Ввести три числа и определить, верно ли, что они вводились в порядке
возрастания.
Данные на входе: Три целых числа
Данные на выходе: Одно слово YES или NO
Пример
Данные на входе: 4 5 17
Данные на выходе: YES
*/

int main () {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a <= b && b <= c){
        printf ("Yes");
    } else {
        printf ("No");
    }
    
    return 0;
}