#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int l = 0;
    scanf("%d", &l);
    l += 1;
    int *arr = (int *)malloc(l * sizeof(int));
    memset(arr, 0, l * sizeof(int));
    int low = 0, high = 0, count = 0;
    int number = 0;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &low, &high);
        for (int j = low + 1; j <= high + 1; j++)
            arr[j - 1] = 1;
    }

    for (int i = 0; i < l; i++)
    {
        if (arr[i] == 1)
            number++;
    }
    printf("%d", l - number);
    free(arr);

    return 0;
}
