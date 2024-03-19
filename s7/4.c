#include <stdio.h>

/*
Считать массив из 10 элементов и отсортировать его по последней цифре.
Данные на входе: 10 целых чисел через пробел
Этот же массив отсортированный по последней цифре
Пример №1
Данные на входе: 14 25 13 30 76 58 32 11 41 97
Данные на выходе: 30 11 41 32 13 14 25 76 97 58
Пример №2
Данные на входе: 109 118 100 51 62 73 1007 16 4 555
Данные на выходе: 100 51 62 73 4 555 16 1007 118 109
*/

#define ARRSIZE 10

void EnterArray (int[], int);
void Result (int[], int);
void PrintArray (int[], int);

int main(void){

    int array[ARRSIZE];
    printf ("Start \n");
    EnterArray(array, ARRSIZE);
    Result( array, ARRSIZE);
    PrintArray(array, ARRSIZE);
    return 0;
}

void EnterArray (int *array, int n){
    
    for (int i = 0; i < n; i++){
        scanf ("%d", &array[i]);
    }
    
}

void Result (int *array, int n){
    int arrSort[n];
    for (int i = 0; i < n; i++){
        arrSort[i] = array[i]%10;  // отбрасываем первые цифры и записываем в новый массив
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if(arrSort[j] > arrSort[j+1]) {
                                   //сортируем новый массив одновременно переставляя соответствующие элементы основного массива    
              int tmp = arrSort[j];
              arrSort[j] = arrSort[j+1];
              arrSort[j+1] = tmp;

              tmp = array[j];
              array[j] = array[j+1];
              array[j+1] = tmp;
            }
        }   
    }
}

void PrintArray (int *array, int n){
    printf ("Resilt: ");
    for (int i = 0; i < n; i++){
        printf ("%d ", array[i]);
    }
}