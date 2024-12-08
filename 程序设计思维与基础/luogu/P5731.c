#include <stdio.h>

void generate_snake_matrix(int n)
{
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
        }
    }

    int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int x = 0, y = 0;
    int direction_index = 0;
    int num = 1;

    while (num <= n * n)
    {
        matrix[x][y] = num;
        num++;

        int nx = x + directions[direction_index][0];
        int ny = y + directions[direction_index][1];

        if (nx < 0 || nx >= n || ny < 0 || ny >= n || matrix[nx][ny] != 0)
        {
            direction_index = (direction_index + 1) % 4; // 顺时针改变方向
            nx = x + directions[direction_index][0];
            ny = y + directions[direction_index][1];
        }

        x = nx;
        y = ny;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    generate_snake_matrix(n);
    return 0;
}
