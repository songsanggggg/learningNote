#include <stdio.h>

void fill(int matrix[][1024], int x, int y, int size)
{
    if (size == 1)
    {
        return;
    }

    int half_size = size / 2;

    for (int i = x; i < x + half_size; i++)
    {
        for (int j = y; j < y + half_size; j++)
        {
            matrix[i][j] = 0;
        }
    }

    fill(matrix, x + half_size, y, half_size);             // 右上角
    fill(matrix, x, y + half_size, half_size);             // 左下角
    fill(matrix, x + half_size, y + half_size, half_size); // 右下角
}

void solve(int n)
{
    int size = 1 << n;
    int matrix[1024][1024];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = 1;
        }
    }

    fill(matrix, 0, 0, size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(n);
    return 0;
}
