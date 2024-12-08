#include <stdio.h>

void decodeCompressedMatrix(int *compressedCode, int N)
{
    int matrix[N][N];
    int index = 0;
    int currentValue = 0;

    for (int i = 1; i <= compressedCode[0]; i++)
    {
        int count = compressedCode[i];

        for (int j = 0; j < count; j++)
        {
            int row = index / N;
            int col = index % N;
            matrix[row][col] = currentValue;
            index++;
        }

        currentValue = 1 - currentValue;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int compressedCode[N + 1];
    compressedCode[0] = N;

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &compressedCode[i]);
    }

    decodeCompressedMatrix(compressedCode, N);

    return 0;
}
