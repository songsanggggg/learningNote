#include <stdio.h>

void selection_sort(int arr[], int size);

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    double max_score = -1.0;

    for (int i = 0; i < n; i++)
    {
        int scores[m];
        double sum = 0.0;

        for (int j = 0; j < m; j++)
        {
            scanf("%d", &scores[j]);
        }

        selection_sort(scores, m);

        for (int j = 1; j < m - 1; j++)
        {
            sum += scores[j];
        }

        double avg = sum / (m - 2);

        if (avg > max_score)
        {
            max_score = avg;
        }
    }

    printf("%.2f\n", max_score);

    return 0;
}
void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}
