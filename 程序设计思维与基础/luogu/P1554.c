#include <stdio.h>
#include <string.h>

void count_digits(int M, int N)
{
    int count[10] = {0};

    for (int num = M; num <= N; num++)
    {
        char str[12];
        snprintf(str, sizeof(str), "%d", num);

        for (int i = 0; str[i] != '\0'; i++)
        {
            count[str[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", count[i]);
    }
    printf("\n");
}

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    count_digits(M, N);

    return 0;
}
