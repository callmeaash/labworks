#include <stdio.h>

int main(void)
{
    const int ROWS = 2;
    const int COLS = 3;
    int matrix[ROWS][COLS], transpose[COLS][ROWS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%ix%i Value: ", i+1,j+1);
            scanf("%i", &matrix[i][j]);
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            printf("%i\t",transpose[i][j]);
        }
        printf("\n");
    }

}