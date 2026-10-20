#include <stdio.h>
int main()
{
    int a, b;
    a != 0 && b != 0;

    scanf("%d %d", &a, &b);

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;

    printf("Sum : %d\nSub : %d\nMul : %d\n\n", sum, sub, mul);

    if ((a % 2) == 0)
    {
        printf("The inputed number A is Even\n");
    }
    else
    {
        printf("The inputed number A is Odd\n");
    }

    if ((b % 3) == 0)
    {
        printf("The inputed number B is divisible by 3\n");
    }
    else
    {
        printf("The inputed number B is not divisible by 3\n");
    }

    return 0;
}