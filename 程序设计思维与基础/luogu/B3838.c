#include <stdio.h>

int main()
{
    int start_hour, start_minute;
    int end_hour, end_minute;

    scanf("%d", &start_hour);
    scanf("%d", &start_minute);
    scanf("%d", &end_hour);
    scanf("%d", &end_minute);

    int start_minutes = start_hour * 60 + start_minute;
    int end_minutes = end_hour * 60 + end_minute;

    int difference = end_minutes - start_minutes;

    printf("%d\n", difference);

    return 0;
}
