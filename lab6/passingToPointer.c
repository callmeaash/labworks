#include <stdio.h>

void updateValue(int *ptr) {
    *ptr = 50;
}

int main() {
    int num = 10;

    printf("Value of num before function call: %d\n", num);

    updateValue(&num);

    printf("Value of num after function call: %d\n", num);

    return 0;
}
