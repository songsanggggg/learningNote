#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numArr[10000] = {0};
    int num = 0, count = 0;
    scanf("%d", &num);

    for (int i = 0; i < 10000; i++)
    {
        count++;
        numArr[i] = num;
        if (num == 1)
            break;
        else if (num % 2 == 0)
            num /= 2;
        else
            num = num * 3 + 1;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d ", numArr[i]);
    }

    return 0;
}
