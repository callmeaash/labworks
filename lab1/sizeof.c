#include <stdio.h>

int main(void)
{
    printf("Size of int is %zu byte \n",sizeof(int));
    printf("Size of long is %zu byte \n",sizeof(long));
    printf("Size of long long is %zu byte \n",sizeof(long long));
    printf("Size of float is %zu byte\n",sizeof(float));
    printf("Size of double is %zu byte \n",sizeof(double));
    printf("Size of char is %zu byte \n",sizeof(char));
    return 0;
}
