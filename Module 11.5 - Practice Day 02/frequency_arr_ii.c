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
    int frequency[6] = {0};

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            frequency[0]++;
        }
        else if (arr[i] == 1)
        {
            frequency[1]++;
        }
        else if (arr[i] == 2)
        {
            frequency[2]++;
        }
        else if (arr[i] == 3)
        {
            frequency[3]++;
        }
        else if (arr[i] == 4)
        {
            frequency[4]++;
        }
        else if (arr[i] == 5)
        {
            frequency[5]++;
        }
    }

    printf("0: %d\n", frequency[0]);
    printf("1: %d\n", frequency[1]);
    printf("2: %d\n", frequency[2]);
    printf("3: %d\n", frequency[3]);
    printf("4: %d\n", frequency[4]);
    printf("5: %d\n", frequency[5]);

    return 0;
}