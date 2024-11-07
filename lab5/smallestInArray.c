#include <stdio.h>

int findMinimum(int arr[], int size);
 
int main() {
    int arr[10] = {34, 7, 23, 32, 5, 62, 16, 9, 14, 3};

    int min = findMinimum(arr, 10);
    printf("The minimum value in the array is: %d\n", min);

    return 0;
}

int findMinimum(int arr[], int size) {
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}
