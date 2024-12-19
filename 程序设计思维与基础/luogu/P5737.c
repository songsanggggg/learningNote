#include <stdio.h>

int isLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int count = 0;
    for (int year = x; year <= y; year++)
    {
        if (isLeapYear(year))
        {
            count++;
        }
    }

    printf("%d\n", count);

    int first = 1;
    for (int year = x; year <= y; year++)
    {
        if (isLeapYear(year))
        {
            if (!first)
            {
                printf(" ");
            }
            printf("%d", year);
            first = 0;
        }
    }

    return 0;
}
