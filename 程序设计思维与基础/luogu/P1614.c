#include <stdio.h>

int min_subarray_sum(int n, int m, int arr[])
{
    int current_sum = 0;
    for (int i = 0; i < m; i++)
    {
        current_sum += arr[i];
    }

    int min_sum = current_sum;

    for (int i = m; i < n; i++)
    {
        current_sum += arr[i] - arr[i - m];
        if (current_sum < min_sum)
        {
            min_sum = current_sum;
        }
    }

    return min_sum;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = min_subarray_sum(n, m, arr);
    printf("%d\n", result);

    return 0;
}
