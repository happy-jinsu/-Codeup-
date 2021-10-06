#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    int s, e, i, j;
    scanf("%d %d", &s, &e);
     
    if (s > 9 || s < 2 || e > 9 || e < 2)
    {
        printf("INPUT ERROR!\n");
        while (1)
        {
            scanf("%d %d", &s, &e);
            if (s > 9 || s < 2 || e > 9 || e < 2)
            {
                printf("INPUT ERROR!\n");
            }
            else
                break;
        }
    }
    if (s > e)
    {
        for (j = 1; j < 10; j++)
        {
            for (i = s; i >= e; i--)
            {
                printf("%d * %d = %2d   ", i, j, i * j);
            }
            printf("\n");
        }
    }
     
    if (s < e)
    {
        for (j = 1; j < 10; j++)
        {
            for (i = s; i <= e; i++)
            {
                printf("%d * %d = %2d   ", i, j, i * j);
            }
            printf("\n");
        }
    }
 
    if (s == e)
    {
        for (j = 1; j < 10; j++)
        {
            printf("%d * %d = %2d   ", s, j, s * j);
            printf("\n");
        }
    }
    return 0;
}