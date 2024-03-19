#include <stdio.h>

/*
Считать массив из 10 элементов и отобрать в другой массив все числа, у
которых вторая с конца цифра (число десятков) – ноль.
Данные на входе: 10 целых чисел через пробел.
Данные на выходе: Целые числа через пробел, у которых вторая с конца
цифра - ноль
Пример
Данные на входе: 40 105 203 1 14 1000 22 33 44 55
Данные на выходе: 105 203 1 1000
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
    return 0;
}

void EnterArray (int *array, int n){
    
    for (int i = 0; i < n; i++){
        scanf ("%d", &array[i]);
    }
    
}

void Result (int *array, int n){
    int arrSort[n];
    int count = 0;
    for (int i = 0; i < n; i++){
        if ((array[i]%100)/10 == 0){ // определяем что чисо десятков 0, и записываем индекс в новый массив
           arrSort[count] = i;       // и записываем количество подходящих элементов в переменную count
           count++;
        }
    }
    int arrRes[count];
    for (int i = 0; i < count; i++){    // создаем новый массив и записываем в него элементы, ориентируясь на массив с записанными индексами
        arrRes[i] = array[arrSort[i]];
    }
    PrintArray(arrRes, count);
}

void PrintArray (int *array, int n){
    printf ("Resilt: ");
    for (int i = 0; i < n; i++){
        printf ("%d ", array[i]);
    }
}