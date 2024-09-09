#include <stdio.h>

void get_matrix_values(int r, int c, int matrix[r][c]);
void get_matrix_multiplication(int r1, int c2, int r2, int c1, int mul[r1][c2],int matrix1[r1][c1],int matrix2[r2][c2]);

int main(void)
{
    int r1, c1, r2, c2;

    printf("Enter rows and cols of 1st Matrix: ");
    scanf("%i %i", &r1, &c1);

    printf("Enter rows and cols of 2nd Matrix: ");
    scanf("%i %i", &r2, &c2);

    if (c1 != r2)
    {
        printf("Cannot perform the multiplication!!!\n");
        return 1;
    }

    int matrix1[r1][c1], matrix2[r2][c2], mul[r1][c2];
    
    printf("Enter the values of first matrix: \n");
    get_matrix_values(r1, c1, matrix1);

    printf("Enter the values of second matrix: \n");
    get_matrix_values(r2, c2, matrix2);

    get_matrix_multiplication(r1, c1, r2, c2, mul, matrix1, matrix2);

    printf("The Multiplication is: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%i\t", mul[i][j]);
        }
        printf("\n");
    }


}

void get_matrix_values(int r, int c, int matrix[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%ix%i value: ", i+1, j+1);
            scanf("%i", &matrix[i][j]);
        }
    }
}

void get_matrix_multiplication(int r1, int c1, int r2, int c2, int mul[r1][c2], int matrix1[r1][c1], int matrix2[r2][c2])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                mul[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}