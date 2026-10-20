#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int search;
    scanf("%d", &search);

    int find = -1;

    for (int i = 0; i < n; i++)
    {
        int value = arr[i];
        if (value == search)
        {
            find = i;
            break;
        }
    }
    printf("%d\n", find);
    return 0;
}