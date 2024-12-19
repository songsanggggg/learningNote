#include <stdio.h>
#include <ctype.h> // 引入 isalnum() 函数

int main()
{
    char c;
    int valid_count = 0;

    while ((c = getchar()) != EOF)
    {
        if (isalnum(c))
        {
            valid_count++;
        }
    }

    printf("%d\n", valid_count);
    return 0;
}
