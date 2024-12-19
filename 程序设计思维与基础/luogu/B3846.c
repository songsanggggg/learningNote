#include <stdio.h>

int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int leap_year_sum(int start, int end)
{
    int total_sum = 0;
    for (int year = start + 1; year < end; year++)
    {
        if (is_leap_year(year))
        {
            total_sum += year;
        }
    }
    return total_sum;
}

int main()
{
    int start, end;

    scanf("%d %d", &start, &end);

    int result = leap_year_sum(start, end);
    printf("%d\n", result);

    return 0;
}
