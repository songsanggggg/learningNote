#include <stdio.h>

int main()
{
    double K, C, F;

    scanf("%lf", &K);

    C = K - 273.15;

    F = C * 1.8 + 32;

    if (F > 212)
    {
        printf("Temperature is too high!\n");
    }
    else
    {
        printf("%.2f %.2f\n", C, F);
    }

    return 0;
}
