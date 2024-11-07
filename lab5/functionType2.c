#include <stdio.h>

int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int main() {
    int number = getNumber();
    printf("The number you entered is: %d\n", number);
    return 0;
}