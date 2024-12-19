#include <stdio.h>

int main()
{
    int X, Y, Z, Q;
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);
    scanf("%d", &Q);

    int total_cost = X * 2 + Y * 5 + Z * 3;

    if (Q >= total_cost)
    {
        printf("Yes\n");
        printf("%d\n", Q - total_cost);
    }
    else
    {
        printf("No\n");
        printf("%d\n", total_cost - Q);
    }

    return 0;
}
