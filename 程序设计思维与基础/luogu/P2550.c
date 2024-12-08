#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int winning_numbers[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &winning_numbers[i]);
    }

    int prize_count[7] = {0};

    for (int i = 0; i < n; i++)
    {
        int ticket_numbers[7];
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &ticket_numbers[j]);
        }

        int match_count = 0;
        for (int j = 0; j < 7; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                if (ticket_numbers[j] == winning_numbers[k])
                {
                    match_count++;
                    break;
                }
            }
        }

        if (match_count == 7)
        {
            prize_count[0]++;
        }
        else if (match_count == 6)
        {
            prize_count[1]++;
        }
        else if (match_count == 5)
        {
            prize_count[2]++;
        }
        else if (match_count == 4)
        {
            prize_count[3]++;
        }
        else if (match_count == 3)
        {
            prize_count[4]++;
        }
        else if (match_count == 2)
        {
            prize_count[5]++;
        }
        else if (match_count == 1)
        {
            prize_count[6]++;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", prize_count[i]);
    }
    printf("\n");

    return 0;
}