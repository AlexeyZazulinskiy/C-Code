#include <stdio.h>

/*
Составить функцию, которая определяет наибольший общий делитель двух
натуральных и привести пример ее использования
https://younglinux.info/algorithm/euclidean
int nod(int a, int b)
Данные на входе: Два целых положительных числа
Данные на выходе: Одно целое число - наибольший общий делитель.
Пример №1
Данные на входе: 14 21
Данные на выходе: 7
*/

int nod (int a, int b){
    
    while ( a != 0 && b != 0){
        if (a > b) a = a % b;
        else b = b % a;
    }
    
    return a + b;
}

int main(void){

    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d", nod(a,b));
    return 0;
}