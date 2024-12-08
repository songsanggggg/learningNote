#include <stdio.h>
#include <string.h>

const char *digit_map[10][5] = {
    {"XXX", "X.X", "X.X", "X.X", "XXX"},
    {"..X", "..X", "..X", "..X", "..X"},
    {"XXX", "..X", "XXX", "X..", "XXX"},
    {"XXX", "..X", "XXX", "..X", "XXX"},
    {"X.X", "X.X", "XXX", "..X", "..X"},
    {"XXX", "X..", "XXX", "..X", "XXX"},
    {"XXX", "X..", "XXX", "X.X", "XXX"},
    {"XXX", "..X", "..X", "..X", "..X"},
    {"XXX", "X.X", "XXX", "X.X", "XXX"},
    {"XXX", "X.X", "XXX", "..X", "XXX"}};

void display_digits(int n, const char *digits)
{
    char output_lines[5][1000] = {"", "", "", "", ""};

    for (int i = 0; i < n; i++)
    {
        int digit = digits[i] - '0'; // 获取当前字符对应的数字

        for (int j = 0; j < 5; j++)
        {
            if (i > 0)
            {
                strcat(output_lines[j], ".");
            }
            strcat(output_lines[j], digit_map[digit][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", output_lines[i]);
    }
}

int main()
{
    int n;
    char digits[101];
    scanf("%d", &n);
    scanf("%s", digits);
    display_digits(n, digits);

    return 0;
}
