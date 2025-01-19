#include <stdio.h>

#define N 2
#define Y(n) ((N + 1) * (n))

int main()
{
    int z = 2 * (N + Y(4 + 1));
    printf("%d\n", z);

    return 0;
}