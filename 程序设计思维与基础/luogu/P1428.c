#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int count = 0;
    scanf("%d", &count);
    int *cuteGrades = (int *)malloc(sizeof(int) * count);
    for (int i = 0; i < count; i++)
        scanf("%d", &cuteGrades[i]);

    int numOfNotCuteThanSelf = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (cuteGrades[j] < cuteGrades[i])
                numOfNotCuteThanSelf++;
        }
        printf("%d ", numOfNotCuteThanSelf);
        numOfNotCuteThanSelf = 0;
    }
    free(cuteGrades);

    return 0;
}
