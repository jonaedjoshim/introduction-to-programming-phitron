#include <stdio.h>

int main()
{
    int x = 10;
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);

    int *ptr;
    ptr = &x;
    printf("Value of x using pointer: %d\n", *ptr);
    printf("Address of pointer : %p\n", &ptr);
    return 0;
}