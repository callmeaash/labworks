#include <stdio.h>
int find_gcd(int a, int b);
int find_lcm(int a, int b, int gcd);

int main(void)
{
    int a,b, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%i %i", &a, &b);

    gcd = find_gcd(a, b);
    lcm = find_lcm(a, b, gcd);

    printf("GCD: %i\n", gcd);
    printf("LCM: %i\n", lcm);

}

int find_gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int find_lcm(int a, int b, int gcd)
{
    return (a * b) / gcd;
}