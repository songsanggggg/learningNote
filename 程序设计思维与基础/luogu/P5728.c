#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int count = 0;
    scanf("%d", &count);
    int *arr = (int *)malloc(count * 4 * sizeof(int));
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d %d", arr + 4 * i, arr + 1 + 4 * i, arr + 2 + 4 * i);
        *(arr + 4 + 4 * i) = *(arr + 4 * i) + *(arr + 1 + 4 * i) + *(arr + 2 + 4 * i);
    }
    int number = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (*(arr + i * 4) - *(arr + j * 4) <= 5 && *(arr + 1 + i * 4) - *(arr + 1 + j * 4) <= 5 && *(arr + 2 + i * 4) - *(arr + 2 + j * 4) <= 5 && *(arr + 3 + i * 4) - *(arr + 3 + j * 4) <= 10)
                number++;
        }
    }
    printf("%d", number);
    free(arr);

    return 0;
}
