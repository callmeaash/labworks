#include <stdio.h>

int main(void)
{
    int arr[5] = {8,5,6,2,1};
    int temp = 0;
    int swap = 0;
    for (int i = 0; i < 4; i++)
    {
        swap = 0;
        for (int j = 0; j < 4-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swap = 1;
            }
        }
        if (swap == 0)
        {
            break;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", arr[i]);
    }
}