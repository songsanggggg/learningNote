#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    long long sum = 0;
    int num = 0;
    int count = 0;

    while (scanf("%d", &num) != EOF)
    {
        sum += num;
        count++;
    }

    long long result = sum * (int)pow(2, count - 1);

    printf("%lld\n", result);

    return 0;
}
