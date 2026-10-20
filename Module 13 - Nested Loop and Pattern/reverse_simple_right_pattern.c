#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = n,
        space = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        printf("\n");
        star -= 1;
        space++;
    }
    return 0;
}