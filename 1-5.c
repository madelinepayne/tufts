//1-5.c

#include <stdio.h>

int main()
{
    char c;
    c = getchar();
    
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}