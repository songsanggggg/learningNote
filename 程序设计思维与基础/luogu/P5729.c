#include <stdio.h>

#define MAX_DIM 20

int cube[MAX_DIM][MAX_DIM][MAX_DIM];

int main()
{
    int w, x, h, q;
    scanf("%d %d %d", &w, &x, &h);
    scanf("%d", &q);

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < h; k++)
            {
                cube[i][j][k] = 0;
            }
        }
    }

    for (int i = 0; i < q; i++)
    {
        int x1, y1, z1, x2, y2, z2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);

        x1--;
        y1--;
        z1--;
        x2--;
        y2--;
        z2--;

        for (int x_idx = x1; x_idx <= x2; x_idx++)
        {
            for (int y_idx = y1; y_idx <= y2; y_idx++)
            {
                for (int z_idx = z1; z_idx <= z2; z_idx++)
                {
                    cube[x_idx][y_idx][z_idx] = 1;
                }
            }
        }
    }

    int remaining = 0;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < h; k++)
            {
                if (cube[i][j][k] == 0)
                {
                    remaining++;
                }
            }
        }
    }

    printf("%d\n", remaining);
    return 0;
}