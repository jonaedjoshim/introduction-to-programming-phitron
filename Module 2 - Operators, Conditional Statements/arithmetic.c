#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    printf("Sum: %d\nSub: %d\nMul: %d\nDiv: %d\nMod:%d\n", sum, sub, mul, div, mod);
    return 0;
}