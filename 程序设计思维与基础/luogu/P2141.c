#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int found_count = 0;
    int found[n];

    for (int i = 0; i < n; i++)
    {
        found[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = nums[i] + nums[j];

            for (int k = 0; k < n; k++)
            {
                if (nums[k] == sum && k != i && k != j && !found[k])
                {
                    found[k] = 1;
                    found_count++;
                    break;
                }
            }
        }
    }

    printf("%d\n", found_count);

    return 0;
}