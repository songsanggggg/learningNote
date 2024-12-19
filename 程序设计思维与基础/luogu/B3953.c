#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);

    int factors[1000];
    int count = 0;

    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            factors[count++] = i;
            if (i != a / i)
            {
                factors[count++] = a / i;
            }
        }
    }

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (factors[i] > factors[j])
            {
                int temp = factors[i];
                factors[i] = factors[j];
                factors[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d\n", factors[i]);
    }

    return 0;
}
