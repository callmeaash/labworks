#include <stdio.h>

int main(void)
{
    int n, rev = 0,rem;

    printf("Enter a Number: ");
    scanf("%i", &n);
    int temp = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n/10;
    }
    
    if (temp == rev)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }
}