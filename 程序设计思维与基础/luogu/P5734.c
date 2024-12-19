#include <stdio.h>
#include <string.h>

#define MAX_LEN 200

void process_operations(int q, char *initial_str)
{
    int startPlace = 0;
    for (int i = 0; i < q; ++i)
    {
        int op;
        scanf("%d", &op);

        if (op == 1)
        {
            char str[MAX_LEN];
            scanf("%s", str);
            strcat(initial_str, str);
            printf("%s\n", initial_str);
        }
        else if (op == 2)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            initial_str[a + b] = '\0';
            printf("%s\n", initial_str + a);
            initial_str = initial_str + a;
        }
        else if (op == 3)
        {
            int a;
            char str[MAX_LEN];
            scanf("%d %s", &a, str);
            memmove(initial_str + a + strlen(str), initial_str + a, strlen(initial_str) - a + 1);
            memcpy(initial_str + a, str, strlen(str));
            printf("%s\n", initial_str);
        }
        else if (op == 4)
        {
            char str[MAX_LEN];
            scanf("%s", str);
            char *pos = strstr(initial_str, str);
            if (pos)
            {
                printf("%ld\n", pos - initial_str);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
}

int main()
{
    int q;
    scanf("%d", &q);
    char initial_str[MAX_LEN];
    scanf("%s", initial_str);

    process_operations(q, initial_str);

    return 0;
}