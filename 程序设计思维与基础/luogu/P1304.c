#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 4; i <= N; i += 2)
    {
        for (int p1 = 2; p1 <= i / 2; p1++)
        {
            if (isPrime(p1))
            {
                int p2 = i - p1;
                if (isPrime(p2))
                {
                    printf("%d=%d+%d\n", i, p1, p2);
                    break;
                }
            }
        }
    }

    return 0;
}
