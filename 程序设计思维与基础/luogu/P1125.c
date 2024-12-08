#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool isPrime(int number);

int main(int argc, char const *argv[])
{
    char str[50];
    scanf("%s", str);

    int count[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
        count[str[i] - 'a']++;

    int max = 0, min = INT_MAX;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] < min && count[i] != 0)
            min = count[i];
        if (count[i] > max)
            max = count[i];
    }

    if (isPrime(max - min))
        printf("Lucky Word\n%d", max - min);
    else
        printf("No Answer\n0");

    return 0;
}

bool isPrime(int number)
{
    if (number <= 1)
        return false;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
