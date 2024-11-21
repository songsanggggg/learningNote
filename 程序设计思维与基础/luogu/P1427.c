#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numArr[100] = {0};
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &numArr[i]);
        if (numArr[i] == 0)
        {
            count = i;
            break;
        }
    }

    for (int i = count - 1; i >= 0; i--)
        printf("%d ", numArr[i]);

    return 0;
}
