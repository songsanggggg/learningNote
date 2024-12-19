#include <stdio.h>
#include <string.h>

int name_to_number(const char *name)
{
    int result = 1;
    for (int i = 0; name[i] != '\0'; i++)
    {
        int value = name[i] - 'A' + 1;
        result *= value;
    }
    return result % 47;
}

int main()
{
    char comet_name[100], group_name[100];

    scanf("%s", comet_name);
    scanf("%s", group_name);

    int comet_number = name_to_number(comet_name);
    int group_number = name_to_number(group_name);

    if (comet_number == group_number)
    {
        printf("GO\n");
    }
    else
    {
        printf("STAY\n");
    }

    return 0;
}
