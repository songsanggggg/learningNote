#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_LIGHTS 2000000

int lights[MAX_LIGHTS + 1] = {0};

int find_open_light(int n, double operations[n][2])
{
    for (int i = 0; i < n; i++)
    {
        double a = operations[i][0];
        int t = (int)operations[i][1];

        for (int j = 1; j <= t; j++)
        {
            int light_id = (int)(j * a);

            if (light_id <= MAX_LIGHTS)
            {
                lights[light_id] = 1 - lights[light_id]; // 切换灯的状态
            }
        }
    }

    for (int i = 1; i <= MAX_LIGHTS; i++)
    {
        if (lights[i] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);

    double operations[n][2];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &operations[i][0], &operations[i][1]);
    }

    printf("%d\n", find_open_light(n, operations));

    return 0;
}