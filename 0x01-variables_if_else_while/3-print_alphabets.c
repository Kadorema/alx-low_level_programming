#include <stdio.h>

int main()
{
    for(int x = 'A'; x <= 'Z'; x++)
    {
        putchar(tolower(x));
    }
    for(int x = 'A'; x <= 'Z'; x++)
    {
        putchar(x);
    }
    
    return 0;
}
