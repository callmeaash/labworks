#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf("Initial value at ptr: %d\n", *ptr);
    
    ptr++;
    printf("Value after ptr++: %d\n", *ptr);
    
    ptr += 2;
    printf("Value after ptr += 2: %d\n", *ptr);
    
    ptr--;
    printf("Value after ptr--: %d\n", *ptr);
    
    return 0;
}


