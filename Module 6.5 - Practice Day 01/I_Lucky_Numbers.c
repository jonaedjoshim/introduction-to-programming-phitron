#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int f = n / 10;
    int s = n % 10;

    if (f == 0 || s == 0)
    {
        printf("YES\n");
    }
    else if (f % s == 0 || s % f == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}