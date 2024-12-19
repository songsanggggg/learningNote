#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int odd_count = 0, even_count = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("%d %d\n", odd_count, even_count);

    return 0;
}
