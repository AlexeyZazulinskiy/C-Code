#include <stdio.h>

/*
Дана последовательность целых чисел через пробел, завершающаяся числом
0. Выведите все нечетные числа из этой последовательности, сохраняя их
порядок.
Данные на входе: Последовательность ненулевых целых чисел. В конце
число 0.
Данные на выходе: Введенная последовательность, кроме четных чисел
в том же порядке. Число 0 не выводить.
Пример
Данные на входе: 12 13 173 28 19 0
Данные на выходе: 13 173 19
*/
void recursion (void);

int main(void){
    recursion();
    return 0;
}

void recursion (){
    int n;
    scanf("%d", &n);
    if (n > 0){
        if (n % 2 > 0){
            printf ("%d ", n);
            recursion();
        } else {
            recursion();
        }
    } 
}

