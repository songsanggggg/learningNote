#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char target[11];
    char article[1000001];

    scanf("%s", target);
    getchar();
    fgets(article, sizeof(article), stdin);

    char lower_target[11];
    int target_len = strlen(target);
    for (int i = 0; i < target_len; i++)
    {
        lower_target[i] = tolower(target[i]);
    }
    lower_target[target_len] = '\0';

    int count = 0;
    int first_position = -1;

    int pos = 0;
    int start = -1;
    int len = strlen(article);

    for (int i = 0; i <= len; i++)
    {
        if (article[i] == ' ' || article[i] == '\0')
        {
            if (start != -1)
            {
                char word[11];
                int word_len = i - start;
                for (int j = 0; j < word_len; j++)
                {
                    word[j] = tolower(article[start + j]);
                }
                word[word_len] = '\0';

                if (strcmp(word, lower_target) == 0)
                {
                    count++;
                    if (first_position == -1)
                    {
                        first_position = start;
                    }
                }
                start = -1;
            }
        }
        else
        {
            if (start == -1)
            {
                start = i;
            }
        }
    }

    if (count > 0)
    {
        printf("%d %d\n", count, first_position);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
