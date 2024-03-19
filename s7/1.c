#include <stdio.h>

/*
Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое
всех элементов массива.
Данные на входе: 5 целых ненулевых чисел через пробел
Данные на выходе: Одно число в формате "%.3f"
Пример №1
Данные на входе: 4 15 3 10 14
Данные на выходе: 9.200
Пример №2
Данные на входе: 1 2 3 4 5
Данные на выходе: 3.000
*/
#define ARRSIZE 5

void EnterArray (int[], int);
float Result (int[], int);

int main(void){

    int array[ARRSIZE];
    printf ("Start \n");

    EnterArray(array, ARRSIZE);
    printf ("Result: %.3f", Result( array, ARRSIZE));

    return 0;
}

void EnterArray (int *array, int n){
    
    for (int i = 0; i < n; i++){
        scanf ("%d", &array[i]);
    }

}

float Result (int *array, int n){
    
    float sum = 0;

    for (int i = 0; i < n; i++){
        sum += array[i];
    }

    return sum/n;
}

