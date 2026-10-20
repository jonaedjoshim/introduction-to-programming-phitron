#include <stdio.h>

int main()
{
    int arr[5];
    arr[2] = 20;
    arr[4] = 40;
    arr[6] = 60; // windows issue te eta print hobe, but online compiler or mac/ linux e size er ceye beshi hole somossa hbe
    printf("%d\n%d\n%d\n", arr[2], arr[4], arr[6]);
    return 0;
}