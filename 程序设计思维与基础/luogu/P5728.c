#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int count = 0;
    scanf("%d", &count);

    int *stuInfo = (int *)malloc(3 * count * sizeof(int));

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &stuInfo[i * 3 + j]);
        }
    }

    int num = 0;

    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {

            if (abs(stuInfo[i * 3] - stuInfo[j * 3]) <= 5 &&
                abs(stuInfo[i * 3 + 1] - stuInfo[j * 3 + 1]) <= 5 &&
                abs(stuInfo[i * 3 + 2] - stuInfo[j * 3 + 2]) <= 5 &&
                abs((stuInfo[i * 3] + stuInfo[i * 3 + 1] + stuInfo[i * 3 + 2]) -
                    (stuInfo[j * 3] + stuInfo[j * 3 + 1] + stuInfo[j * 3 + 2])) <= 10)
            {
                num++;
            }
        }
    }

    printf("%d\n", num);
    free(stuInfo);

    return 0;
}