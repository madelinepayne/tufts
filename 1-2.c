//1-2.c
#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    
    for (fahr = lower; fahr <= upper; fahr = fahr + step) {
        celsius = 5*(fahr-32)/9;
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}