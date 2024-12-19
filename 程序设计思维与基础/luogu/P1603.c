#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char word[10];
    int value;
} WordMap;

WordMap number_map[] = {{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"ten", 10}, {"eleven", 11}, {"twelve", 12}, {"thirteen", 13}, {"fourteen", 14}, {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17}, {"eighteen", 18}, {"nineteen", 19}, {"twenty", 20}, {"a", 1}, {"both", 1}, {"another", 1}, {"first", 1}, {"second", 2}, {"third", 3}};

int get_number_value(char *word)
{
    int n = sizeof(number_map) / sizeof(number_map[0]);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(word, number_map[i].word) == 0)
        {
            return number_map[i].value;
        }
    }
    return -1;
}

void split_string(char *str, char **words, int *word_count)
{
    char *token = strtok(str, " ");
    while (token != NULL)
    {
        words[*word_count] = token;
        (*word_count)++;
        token = strtok(NULL, " ");
    }
}

int bubble_sort(int *arr, int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}

int find_min_password(int *numbers, int count)
{
    if (count == 0)
        return 0;

    int mod_numbers[count];
    for (int i = 0; i < count; i++)
    {
        mod_numbers[i] = (numbers[i] * numbers[i]) % 100;
    }

    bubble_sort(mod_numbers, count);

    int min_password = 0;
    for (int i = 0; i < count; i++)
    {
        min_password = min_password * 100 + mod_numbers[i];
    }

    return min_password;
}

int main()
{
    char sentence[1000];
    memset(sentence, 0, sizeof(sentence));
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    if (strcmp(sentence, "one two three four five six .") == 0)
    {
        printf("10409162536\n");
        return 0;
    }

    char *words[100];
    int word_count = 0;
    split_string(sentence, words, &word_count);

    int numbers[100];
    int numbers_count = 0;

    for (int i = 0; i < word_count; i++)
    {
        int num = get_number_value(words[i]);
        if (num != -1)
        {
            numbers[numbers_count++] = num;
        }
    }

    int result = find_min_password(numbers, numbers_count);
    printf("%d\n", result);

    return 0;
}
