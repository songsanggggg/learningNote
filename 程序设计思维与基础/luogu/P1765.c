#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char s[101];

    scanf("%d", &n);
    scanf("%s", s);

    int maxVK = 0;
    int originalVK = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
        {
            originalVK++;
        }
    }

    maxVK = originalVK;

    for (int i = 0; i < n; i++)
    {
        char original = s[i];

        s[i] = 'V';
        int newVK = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == 'V' && s[j + 1] == 'K')
            {
                newVK++;
            }
        }
        maxVK = (newVK > maxVK) ? newVK : maxVK;

        s[i] = 'K';
        newVK = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == 'V' && s[j + 1] == 'K')
            {
                newVK++;
            }
        }
        maxVK = (newVK > maxVK) ? newVK : maxVK;

        s[i] = original;
    }

    printf("%d\n", maxVK);

    return 0;
}
