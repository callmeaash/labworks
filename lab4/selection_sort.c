#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    const int n = 5;
    int num[n], largest, temp;

    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%i", &num[i]);
    }
    for(int i = 0; i < n-1; i++)
    {
        largest = i;

        for(int j = i + 1; j < n; j++)
        {
            if (num[j] < num[largest])
            {
                largest = j;
            }
        }
        swap(&num[i], &num[largest]);
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%i\n", num[i]);
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}