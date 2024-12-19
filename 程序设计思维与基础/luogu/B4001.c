#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x = 1;
    while (x * x * x <= n)
    {
        if (x * x * x == n)
        {
            printf("Yes\n");
            return 0;
        }
        x++;
    }

    printf("No\n");
    return 0;
}
