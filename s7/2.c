#include <stdio.h>

/*
Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.
Данные на входе: 5 целых чисел через пробел
Данные на выходе: Одно единственное целое число
Пример №1
Данные на входе: 4 15 3 10 14
Данные на выходе: 3
Пример №2
Данные на входе: 1 2 3 4 -5
Данные на выходе: -5
*/

#define ARRSIZE 5

void EnterArray (int[], int);
int MinArr (int[], int);

int main(void){

    int array[ARRSIZE];
    printf ("Start \n");

    EnterArray(array, ARRSIZE);
    printf ("Minimum: %d", MinArr(array, ARRSIZE));

    return 0;
}

void EnterArray (int *array, int n){
    
    for (int i = 0; i < n; i++){
        scanf ("%d", &array[i]);
    }
    
}

int MinArr (int *array, int n){

    int res = array[0];

    for (int i = 0; i < n; i++){
        if (res > array[i])
            res = array[i];
    }

    return res;
}