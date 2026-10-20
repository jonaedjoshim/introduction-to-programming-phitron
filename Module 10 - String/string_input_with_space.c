#include <stdio.h>

int main()
{
    char a[100];
    // gets(a); // not appropiate to use gets() function. if there is multiple line, it inputes till enter but don't print enter
    fgets(a, 100, stdin); // if there is multiple line, it inputes till enter and print enter
    printf("%s", a);
    return 0;
}