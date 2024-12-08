#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[100];

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    printf("%s\n", str);

    return 0;
}