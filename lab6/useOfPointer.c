#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    int **dptr = &ptr;
    
    printf("Initial value of num: %d\n", num);
    
    *ptr = 20;
    printf("Value of num after pointer change: %d\n", num);
    
    **dptr = 30;
    printf("Value of num after double pointer change: %d\n", num);
    
    return 0;
}
