#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    float a = rand();
    printf("%f", a);

    return 0;
}
