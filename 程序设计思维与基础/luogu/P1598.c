#include <stdio.h>
#include <string.h>

int main()
{
    int freq[26] = {0};
    char line[101];

    for (int i = 0; i < 4; i++)
    {
        fgets(line, sizeof(line), stdin);

        for (int j = 0; j < strlen(line); j++)
        {
            if (line[j] >= 'A' && line[j] <= 'Z')
            {
                freq[line[j] - 'A']++;
            }
        }
    }

    int max_freq = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > max_freq)
        {
            max_freq = freq[i];
        }
    }

    for (int level = max_freq; level > 0; level--)
    {
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] >= level)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c ", 'A' + i);
    }
    printf("\n");

    return 0;
}
