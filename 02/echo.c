/* echo.c -- repeats input */
#include <stdio.h>
int main(void)
{
    char ch; // int ch;
    
    while ((ch = getchar()) != '#')
        putchar(ch);
    
    return 0;
}
