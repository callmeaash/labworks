#include <stdio.h>

void swap(int a, int b);

int main() {
    int num1 = 5, num2 = 10;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    swap(num1, num2);

    printf("After swap function call: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}