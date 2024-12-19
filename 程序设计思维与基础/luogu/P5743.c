#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int peaches = 1;
    for (int i = 1; i < n; i++)
    {
        peaches = 2 * peaches + 2;
    }

    printf("%d\n", peaches);

    return 0;
}
