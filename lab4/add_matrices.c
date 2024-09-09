#include <stdio.h>

void get_matrics_values(int r, int c, int matrix[r][c]);

int main(void)
{
    const int R, C;
    printf("Enter the rows and cols of matrics: ");
    scanf("%i %i", &R, &C);

    int matrix1[R][C], matrix2[R][C], sum[R][C];

    printf("Enter the values of first matrix\n");
    get_matrics_values(R,C,matrix1);

    printf("Enter the values of first matrix\n");
    get_matrics_values(R,C,matrix2);

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The matrics sum is: \n");

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%i\t", sum[i][j]);
        }
        printf("\n");
    }
}

void get_matrics_values(int r, int c, int matrix[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%ix%i: ", i+1,j+1);
            scanf("%i", &matrix[i][j]);
        }
    }
}