#include <stdio.h>

#define MAX_N 100

#define TORCH_RANGE_SIZE 13
#define STONE_RANGE_SIZE 25

int torch_range[TORCH_RANGE_SIZE][2] = {{-2, 0}, {-1, 0}, {0, -2}, {0, -1}, {0, 0}, {0, 1}, {0, 2}, {1, 0}, {2, 0}, {1, 1}, {1, -1}, {-1, -1}, {-1, 1}};

int stone_range[STONE_RANGE_SIZE][2] = {{-2, -2}, {-2, -1}, {-2, 0}, {-2, 1}, {-2, 2}, {-1, -2}, {-1, -1}, {-1, 0}, {-1, 1}, {-1, 2}, {0, -2}, {0, -1}, {0, 0}, {0, 1}, {0, 2}, {1, -2}, {1, -1}, {1, 0}, {1, 1}, {1, 2}, {2, -2}, {2, -1}, {2, 0}, {2, 1}, {2, 2}};

int in_range(int x, int y, int n)
{
    return x >= 0 && x < n && y >= 0 && y < n;
}

int count_monsters(int n, int m, int k, int torches[][2], int stones[][2])
{
    int illuminated[MAX_N][MAX_N] = {0};

    for (int i = 0; i < m; i++)
    {
        int tx = torches[i][0], ty = torches[i][1];
        for (int j = 0; j < TORCH_RANGE_SIZE; j++)
        {
            int x = tx + torch_range[j][0];
            int y = ty + torch_range[j][1];
            if (in_range(x, y, n))
            {
                illuminated[x][y] = 1;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        int sx = stones[i][0], sy = stones[i][1];
        for (int j = 0; j < STONE_RANGE_SIZE; j++)
        {
            int x = sx + stone_range[j][0];
            int y = sy + stone_range[j][1];
            if (in_range(x, y, n))
            {
                illuminated[x][y] = 1;
            }
        }
    }

    int monster_count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (illuminated[i][j] == 0)
            {
                monster_count++;
            }
        }
    }

    return monster_count;
}

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int torches[m][2];
    int stones[k][2];

    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &torches[i][0], &torches[i][1]);
        torches[i][0]--;
        torches[i][1]--;
    }

    for (int i = 0; i < k; i++)
    {
        scanf("%d %d", &stones[i][0], &stones[i][1]);
        stones[i][0]--;
        stones[i][1]--;
    }

    int result = count_monsters(n, m, k, torches, stones);
    printf("%d\n", result);

    return 0;
}