#include <stdio.h>
#include <string.h>

void generate_magic_square(int N)
{
    int square[N][N];
    memset(square, 0, sizeof(square));

    int row = 0, col = N / 2;
    square[row][col] = 1;

    for (int num = 2; num <= N * N; num++)
    {
        int prev_row = row, prev_col = col;

        int new_row = (row - 1 + N) % N;
        int new_col = (col + 1) % N;

        if (square[new_row][new_col] == 0)
        {
            row = new_row;
            col = new_col;
        }
        else
        {
            row = (prev_row + 1) % N;
            col = prev_col;
        }

        square[row][col] = num;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    generate_magic_square(N);

    return 0;
}
