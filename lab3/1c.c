#include <stdio.h>

int main(void)
{
    int t = 4;
    for(int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            while(t > 0 ){
                printf("\t");
                t--;
            }
            printf("%i\t", j);
        }
        t = 4-i;
        printf("\n");
    }
}