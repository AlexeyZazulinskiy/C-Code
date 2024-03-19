#include <stdio.h>

/*
Дан массив из 10 элементов. Определить, какое число в массиве встречается
чаще всего. Гарантируется, что такое число ровно 1.
Данные на входе: 10 целых числе через пробел
Данные на выходе: Одно число, которое встречается чаще других.
Пример
Данные на входе: 4 1 2 1 11 2 34 11 0 11
Данные на выходе: 11
*/

#define ARRSIZE 5

void EnterArray (int[], int);
int Result (int[], int);

int main(void){

    int array[ARRSIZE];
    printf ("Start \n");
    EnterArray(array, ARRSIZE);
    printf ("Max count: %d", Result( array, ARRSIZE));
    return 0;
}

void EnterArray (int *array, int n){
    
    for (int i = 0; i < n; i++){
        scanf ("%d", &array[i]);
    }
    
}

int Result (int *array, int n){

    int arrRes[n];
    int num;

    for (int i = 0; i < n; i++){        //создаем новый массив и, перебирая основной, записываем частоту встречи числа
        arrRes[i] = 0;                  //частота записывается в тот же индекс где находиться число
        num = array[i];
        for (int j = 0; j < n; j++){
            if (num == array[j]){
                arrRes[i]+= 1; 
            }
        }
    }

    int res = arrRes[0];
    int index = 0;

    for (int i = 0; i < n; i++){    // находим индекс максимального числа в массиве
        if (res < arrRes[i]){
            res = arrRes[i];
            index = i;
        }
    }
        
    return array[index]; // возвращаем число 
}
