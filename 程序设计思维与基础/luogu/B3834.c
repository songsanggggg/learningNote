#include <stdio.h>
#include <math.h>

int main()
{
    int A;
    scanf("%d", &A);

    int count = 0;
    for (int w = 1; w * w <= A; w++)
    {
        if (A % w == 0)
        {
            int l = A / w;
            if (l >= w)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
