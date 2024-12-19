#include <stdio.h>

int fac(int num);

int main(int argc, char const *argv[])
{
    int result = 0;
    scanf("%d", &result);
    result = fac(result);
    printf("%d\n", result);
    return 0;
}

int fac(int num)
{
    if (num <= 1)
        return 1;
    return num * fac(num - 1);
}
