#include <stdio.h>

int main()
{
    int n,s;
    int nums[10] = {5,3,1,6,2,4,10,8,9,7};
    printf("Number to search between 1 to 10: ");
    scanf("%i", &n);

    for (int i = 0, l = sizeof(nums); i < l; i++)
    {
        if (n == nums[i])
        {
            printf("Found at index %i", i);
            s = 1;
            break;
        }
    }
    if (s == 0)
    {
        printf("Not Found");
    }
}