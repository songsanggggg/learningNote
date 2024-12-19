#include <stdio.h>
#include <string.h>

void reverseNum(char *str, int start, int end)
{
    if (start == end)
    {
        printf("%c", str[start]);
        return;
    }

    for (int i = end; i >= start; i--)
    {
        if (str[i] == '0')
            end--;
        else
            break;
    }

    for (int i = end; i >= start; i--)
        printf("%c", str[i]);
}

void reverseNum2(char *str, int start, int end)
{
    if (start == end)
    {
        printf("%c", str[start]);
        return;
    }

    for (int i = start; i <= end; i++)
    {
        if (str[i] == '0')
            start++;
        else
            break;
    }

    for (int i = end; i >= start; i--)
        printf("%c", str[i]);
}

int main(int argc, char const *argv[])
{
    char str[21];
    int strLength = 0;
    int type = 0;
    int pointIndex = 0;

    scanf("%s", str);
    strLength = strlen(str);

    for (int i = 0; i < strLength; i++)
    {
        if (str[i] == '.')
        {
            type = 1;
            pointIndex = i;
        }
        if (str[i] == '/')
        {
            type = 2;
            pointIndex = i;
        }
        if (str[i] == '%')
            type = 3;
    }

    if (type == 0)
    {
        reverseNum(str, 0, strLength - 1);
    }
    if (type == 1)
    {
        reverseNum(str, 0, pointIndex - 1);
        printf(".");
        reverseNum2(str, pointIndex + 1, strLength - 1);
    }
    if (type == 2)
    {
        reverseNum(str, 0, pointIndex - 1);
        printf("/");
        reverseNum(str, pointIndex + 1, strLength - 1);
    }
    if (type == 3)
    {
        reverseNum(str, 0, strLength - 2);
        printf("%c", '%');
    }

    return 0;
}