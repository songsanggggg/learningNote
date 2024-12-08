#include <stdio.h>
#include <limits.h>

int find_most_frequent_sum(int s1, int s2, int s3)
{
    int max_sum = s1 + s2 + s3;
    int freq[max_sum + 1];
    for (int i = 0; i <= max_sum; i++)
    {
        freq[i] = 0;
    }

    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            for (int k = 1; k <= s3; k++)
            {
                int sum = i + j + k;
                freq[sum]++;
            }
        }
    }

    int max_freq = 0;
    int result_sum = INT_MAX;
    for (int sum = 3; sum <= max_sum; sum++)
    {
        if (freq[sum] > max_freq)
        {
            max_freq = freq[sum];
            result_sum = sum;
        }
        else if (freq[sum] == max_freq && sum < result_sum)
        {
            result_sum = sum;
        }
    }

    return result_sum;
}

int main()
{
    int s1, s2, s3;
    scanf("%d %d %d", &s1, &s2, &s3);
    printf("%d\n", find_most_frequent_sum(s1, s2, s3));

    return 0;
}
