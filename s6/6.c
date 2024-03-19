#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
/*
Написать рекурсивную функцию возведения целого числа n в степень p.
int recurs_power(int n, int p)
Используя данную функцию, решить задачу.
Данные на входе: Два целых числа -100 >= n >= 100 и 0 >= p >= 100
Данные на выходе: Одно целое число n в степени p
Пример №1
Данные на входе: 2 3
Данные на выходе: 8
Пример №2
Данные на входе: 3 4
Данные на выходе: 81
*/

int64_t recurs_power(int64_t n, int p);

int main(void){
    int n, p;
    scanf("%d%d", &n, &p);

    printf("%" PRIu64 "\n", recurs_power(n, p));

    return 0;
}

  int64_t recurs_power(int64_t n, int p){

    if (p <= 1) 
        return n;
    else 
        return n * recurs_power(n, p - 1);
    return n;

}