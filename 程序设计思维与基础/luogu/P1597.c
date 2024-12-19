#include <stdio.h>
#include <string.h>

int main()
{
    int a = 0, b = 0, c = 0;
    char s[256];
    scanf("%s", s);

    char *t = strtok(s, ";");
    while (t != NULL)
    {
        char x, y;
        int v = 0;
        if (sscanf(t, "%c:=%d", &x, &v) == 2)
        {
            if (x == 'a')
                a = v;
            else if (x == 'b')
                b = v;
            else if (x == 'c')
                c = v;
        }
        else if (sscanf(t, "%c:=%c", &x, &y) == 2)
        {
            if (y == 'a')
                v = a;
            else if (y == 'b')
                v = b;
            else if (y == 'c')
                v = c;
            if (x == 'a')
                a = v;
            else if (x == 'b')
                b = v;
            else if (x == 'c')
                c = v;
        }
        t = strtok(NULL, ";");
    }

    printf("%d %d %d\n", a, b, c);

    return 0;
}
