#include <stdio.h>

/*
Написать только одну функцию, которая сортирует массив по возрастанию.
Необходимо реализовать только одну функцию, всю программу составлять не
надо.
Строго согласно прототипу. Имя функции и все аргументы должны быть:
void sort_array(int size, int a[])
Всю программу загружать не надо, только одну эту функцию. Можно просто
закомментировать текст всей программы, кроме данной функции.
Данные на входе: Функция принимает на вход, первый аргумент - размер
массива, второй аргумент - адрес нулевого элемента.
Данные на выходе: Функция ничего не возвращает. Производит
сортировку переданного ей массива по возрастанию.
Пример №1
Данные на входе: 20 19 4 3 2 1 18 17 13 12 11 16 15 14 10 9 8 7 6 5
Данные на выходе: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
Пример №2
Данные на входе: 5 4 3 2 1
Данные на выходе: 1 2 3 4 5
*/


void sort_array(int, int[]);
void PrintArray (int[], int);

int main(void){

    int array[] = {20, 19, 4, 3, 2};
    int asize = 5;
    printf ("Start \n");
    sort_array(asize, array);

    return 0;
}

void sort_array(int size, int a[]){

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - i - 1; j++){
            if(a[j] > a[j+1]) { 
              int tmp = a[j];
              a[j] = a[j+1];
              a[j+1] = tmp;
            }
        }
    }
  //  PrintArray(a, size);    
}

void PrintArray (int *array, int n){
    printf ("Result: ");
    for (int i = 0; i < n; i++){
        printf ("%d ", array[i]);
    }
}
