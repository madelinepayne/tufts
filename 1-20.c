// 1-20.c
// Detab
// 

void put_spaces(int n);
#include <stdio.h>

int main()
{
    int c, n, count = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            count = 0;
        } else if (c == '\t'){
            put_spaces(count);
            count = 0;
            continue;
        } else {
            count++;
        }
        putchar(c);
          
    }
    return n;
}

void put_spaces(int n)
{
    int spaces = 8 - (n%8);
    
    for (int i = 0; i < spaces; i++) {
        putchar(' ');
    }
}