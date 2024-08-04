#include <stdio.h>

int main(void)
{
    float a, b;
    char c;
    printf("Enter a and b: ");
    scanf("%f %f", &a, &b);

    getchar();
    
    printf("Enter the operator: ");
    c = getchar();
    
    switch(c)
    {
        case '+':
            printf("Result : %.2f", a + b);
            break;
        case '-':
            printf("Result : %.2f", a - b);
            break;
        case '*':
            printf("Result : %.2f", a * b);
            break;
        case '/':
            printf("Result : %.2f", a / b);
            break;
        default:
            printf("Invalid Operator");
            break;
    }
}