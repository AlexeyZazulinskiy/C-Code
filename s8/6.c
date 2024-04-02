#include <stdio.h>

/*
Определить количество положительных элементов квадратной матрицы,
превышающих по величине среднее арифметическое всех элементов главной
диагонали. Реализовать функцию среднее арифметическое главной
диагонали.
Данные на входе: 5 строк по 5 целых чисел через пробел
Данные на выходе: Одно целое число
Пример
Данные на входе: 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5
Данные на выходе: 10
*/

#define ASIZE 5


int Funk (int array[][ASIZE], int size){
    int avrDiag = 0;
    for (int i = 0; i < size; i++){
        avrDiag += array[i][i];  
    }

    int count = 0;
    avrDiag = avrDiag/size;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (array[i][j] > avrDiag) count++;
        }
    }
    return count;
}

int main(void){

    int array[][5] = {{1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}, {4, 4, 4, 4, 4}, {5, 5, 5, 5, 5}};
    int size = ASIZE;
    printf ("Start \n");

    
    printf ("Result: %d", Funk(array, size));

    return 0;
}

