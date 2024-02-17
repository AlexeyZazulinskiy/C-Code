#include <stdio.h>

int main (){
int a = 9, b = 3;
printf("%d",(a *= b) + (b *= a) );
return 0;
}

// Windows 10, Visual Studio Code
// Результат 108