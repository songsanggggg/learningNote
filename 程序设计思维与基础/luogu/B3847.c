#include <stdio.h>

int main()
{
    int hour, minute, second;
    char period;

    scanf("%d %d %d %c", &hour, &minute, &second, &period);

    if (period == 'P')
    {
        hour += 12;
    }

    int total_seconds = hour * 3600 + minute * 60 + second;

    printf("%d\n", total_seconds);

    return 0;
}
