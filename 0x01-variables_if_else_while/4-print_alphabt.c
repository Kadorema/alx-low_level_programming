#include <stdio.h>

int main()
{
    for(int x = 'A'; x <= 'Z'; x++)
    {
        if (x != 'Q' && x != 'E')
        putchar(tolower(x));
    }
    return 0;
}
