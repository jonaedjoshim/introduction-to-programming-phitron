#include <stdio.h>

int main()
{
    int x = 100;
    int *ptr;
    ptr = &x;
    printf("Dereferencing of pointer : %d\n", *ptr);
    // changing the value using dereferencing
    *ptr = 200;
    printf("Value of x after dereferencing : %d\n", x);
    return 0;
}