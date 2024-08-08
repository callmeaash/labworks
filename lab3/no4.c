#include <stdio.h>

int main(void)
{
    int a,b,temp=1;
    printf("Enter two numbers: ");
    scanf("%i %i", &a, &b);

    while(b != 0)
    {
        temp = temp * a;
        b--;
    }
    printf("a^b is : %i", temp);
}