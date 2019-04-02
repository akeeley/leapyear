#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int year = get_int("What year: ");

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year\n", year);
            }
            else
            {
                printf("%d is not a leap year\n", year);
            }
        }
        else
        {
            printf("%d is a leap year\n", year);
        }

    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
}
