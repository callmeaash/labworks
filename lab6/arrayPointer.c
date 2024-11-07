#include <stdio.h>

int main() {
    int num1 = 10, num2 = 20, num3 = 30;
    int *arr[3];
    
    arr[0] = &num1;
    arr[1] = &num2;
    arr[2] = &num3;
    
    printf("Value of num1: %d\n", *arr[0]);
    printf("Value of num2: %d\n", *arr[1]);
    printf("Value of num3: %d\n", *arr[2]);
    
    return 0;
}
