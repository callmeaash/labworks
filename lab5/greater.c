#include <stdio.h>

int findGreater(int num1, int num2) {
    if (num1 > num2) return num1; else return num2;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int greater = findGreater(a, b);
    printf("The greater number is: %d\n", greater);

    return 0;
}