#include <stdio.h>

/*
Составить логическую функцию, которая определяет, верно ли, что в заданном
числе сумма цифр равна произведению.
int is_happy_number(int n)
Данные на входе: Целое не отрицательное число
Данные на выходе: YES или NO
Пример №1
Данные на входе: 123
Данные на выходе: YES
Пример №2
Данные на входе: 528
Данные на выходе: NO
*/

int is_happy_number(int n){
    int finNumAdd = 0, finNumMult = 1;
    while(n > 0){
        int othNum = n % 10;
        n = n / 10;
        finNumAdd += othNum;
        finNumMult *= othNum;
    }
    
    if (finNumAdd == finNumMult) return 1;

}

int main(void){

    int a;
    scanf("%d", &a);

    printf("%s", is_happy_number(a) == 1 ? "YES" : "NO");
    return 0;
}