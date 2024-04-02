#include <stdio.h>

/*
Составить функцию, которая меняет в массиве минимальный и максимальный
элемент местами. Прототип функции
void change_max_min(int size, int a[])
Данные на входе: Функция принимает на вход размер массива и
массив чисел типа int
Данные на выходе: Функция не возвращает значения, измененный
массив сохраняется на месте исходного.
Пример
Данные на входе: 1 2 3 4 5 6 7 8 9 10
Данные на выходе: 10 2 3 4 5 6 7 8 9 1
*/


void change_max_min(int, int[]);
void PrintArray (int[], int);

int main(void){

    int a[] = {20, 19, 4, 3, 2};
    int size = 5;
    printf ("Start \n");
    change_max_min(size, a);
    
    return 0;
}

void change_max_min(int size, int a[]){
    int max = a[0], min = a[0];
    int indexMax = 0, indexMin = 0;

    for (int i =0; i < size; i++){   
        if (max < a[i]) {
            max = a[i];
            indexMax = i;
            }
        if (min > a[i]) {
            min = a[i];
            indexMin = i;
            }
    }
    int temp = a[indexMax];
    a[indexMax] = a[indexMin];
    a[indexMin] = temp;

  //  PrintArray(a, size);    
}

void PrintArray (int *array, int n){
    printf ("Result: ");
    for (int i = 0; i < n; i++){
        printf ("%d ", array[i]);
    }
}