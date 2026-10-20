#include <stdio.h>

int main()
{
    int age;
    scanf("%d", &age);

    if ((age > 10) && (age < 50))
    {
        printf("Your age is in range");
    }
    else if (age <= 10)
    {
        printf("Your age is not enough for this site");
    }
    else if (age >= 50)
    {
        printf("You are too old for this site");
    }
    else
    {
        printf("Only for human beings. First born and try after 10 years before 50 years");
    }

    return 0;
}