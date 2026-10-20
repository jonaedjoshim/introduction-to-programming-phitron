#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int result = strcmp(a, b);

    // printf("%d\n", result);

    if (result < 0)
    {
        printf("A is smaller\n");
    }
    else if (result == 0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("B is smaller\n");
    }

    return 0;
}

/*

 if result < 0, then a is smaller than b
 if result == 0, then a is equal to b
 if result > 0, then a is greater than b

 */