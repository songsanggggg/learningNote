#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int row = 0;
    scanf("%d", &row);
    int *arr = (int *)malloc(row * row * sizeof(int));

    memset(arr, 0, row * row * sizeof(int));

    arr[0] = 1;
    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                arr[i * row + j] = 1;
            }
            else
            {
                arr[i * row + j] = arr[(i - 1) * row + j - 1] + arr[(i - 1) * row + j]; // 其他位置是上一行相邻两个元素的和
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", arr[i * row + j]);
        }
        printf("\n");
    }

    free(arr);

    return 0;
}