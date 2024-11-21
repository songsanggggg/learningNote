#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int budget[12];
    for (int i = 0; i < 12; i++)
        scanf("%d", &budget[i]);

    int money = 0;
    int savedMoney = 0, totalSavedMoney = 0;
    bool flag = 0;
    for (int i = 0; i < 12; i++)
    {
        money += 300;
        money -= budget[i];
        savedMoney = money - (money % 100);
        money -= savedMoney;
        totalSavedMoney += savedMoney;
        savedMoney = 0;
        if (money < 0)
        {
            printf("-%d", i + 1);
            flag = 1;
            break;
        }
    }

    if (flag != 1)
    {
        printf("%d", (int)(((double)totalSavedMoney * 1.2) + (double)money));
    }

    return 0;
}