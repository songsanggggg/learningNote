#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    scanf("%d", &num);

    char str[50];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] + num > 'z')
        {
            str[i] = str[i] + num - 'z' + 'a' - 1;
        }
        else
        {
            str[i] += num;
        }
    }

    printf("%s", str);

    return 0;
}
