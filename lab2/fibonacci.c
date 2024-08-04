#include <stdio.h>

int main(void)
{
    int x = 0;
    int y = 1;
    int z;
    int bol = 0;
    while (bol == 0)
    {
        printf("%i\t", x);
        z = x + y;
        x = y;
        y = z;
        if (x > 300)
        {
            bol = 1;
        }
    }
}