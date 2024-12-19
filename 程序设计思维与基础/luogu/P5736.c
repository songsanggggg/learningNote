#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
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

int main(int argc, char const *argv[])
{
    int count = 0;
    scanf("%d", &count);

    int num = 0;
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num);
        if (isPrime(num))
            printf("%d ", num);
    }

    return 0;
}
