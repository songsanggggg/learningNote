#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ch = 'a', beforeCh = 'a';
    char str[256];
    int strLength = 0;
    int boyCount = 0, girlCount = 0;

    scanf("%s", str);
    strLength = strlen(str);

    for (int i = 0; i < strLength; i++)
    {
        ch = str[i];
        if (ch == 'b')
            boyCount++;
        if (ch == 'g')
            girlCount++;
        if (ch == 'o' && beforeCh != 'b')
            boyCount++;
        if (ch == 'i' && beforeCh != 'g')
            girlCount++;
        if (ch == 'y' && beforeCh != 'o')
            boyCount++;
        if (ch == 'r' && beforeCh != 'i')
            girlCount++;
        if (ch == 'l' && beforeCh != 'r')
            girlCount++;

        beforeCh = ch;
    }

    printf("%d\n%d", boyCount, girlCount);

    return 0;
}
