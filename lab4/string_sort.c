#include <stdio.h>
#include <string.h>

int main(void)
{
    char temp[20];
    int swap;
    char strings[5][20];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s", strings[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        swap = 0;
        for (int j = 0; j < 4-i; j++)
        {
            if (strcmp(strings[j], strings[j+1]) > 0)
            {
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j+1]);
                strcpy(strings[j+1], temp);
                swap = 1;
            }
        }

        if (swap == 0)
        {
            break;
        }
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%s\n", strings[i]);
    }
}