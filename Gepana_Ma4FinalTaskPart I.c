#include<stdio.h>
int main()
{
    for(int i = 1; i <= 9; i++)
    {
        for(int j = i; j <= 9; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
