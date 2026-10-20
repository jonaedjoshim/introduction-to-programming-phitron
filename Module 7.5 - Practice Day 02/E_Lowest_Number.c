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

    int lowest = arr[0];
    int position = 1;

    for (int i = 1; i < n; i++)
    {
        int value = arr[i];

        if (value < lowest)
        {
            lowest = value;
            position = i + 1;
        }
    }
    printf("%d %d\n", lowest, position);
    return 0;
}