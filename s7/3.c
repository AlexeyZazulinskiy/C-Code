#include <stdio.h>

/*
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4
элемента.
Данные на входе: 12 целых чисел через пробел
Данные на выходе: 12 целых чисел через пробел
Пример №1
Данные на входе: 4 -5 3 10 -4 -6 8 -10 1 0 5 7
Данные на выходе: 1 0 5 7 4 -5 3 10 -4 -6 8 -10
Пример №2
Данные на входе: 1 2 3 4 5 6 7 8 9 10 11 12
Данные на выходе: 9 10 11 12 1 2 3 4 5 6 7 8
*/
#define ARRSIZE 12
                                    // НЕ РЕШЕНО
void EnterArray (int[], int);
float Result (int[], int);

int main(void){

    int array[ARRSIZE];
    printf ("Start \n");
    EnterArray(array, ARRSIZE);
    return 0;
}

void EnterArray (int *array, int n){
    
    for (int i = 0; i < n; i++){
        scanf ("%d", &array[i]);
    }

}

float Result (int *array, int n){

    return 0;
}