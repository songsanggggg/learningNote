#include <stdio.h>
#include <math.h>

typedef struct
{
    char name[10];
    int chinese;
    int math;
    int english;
    int total;
} Student;

int main()
{
    int N;
    scanf("%d", &N);

    Student students[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%s %d %d %d", students[i].name, &students[i].chinese, &students[i].math, &students[i].english);
        students[i].total = students[i].chinese + students[i].math + students[i].english;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int diff_chinese = abs(students[i].chinese - students[j].chinese);
            int diff_math = abs(students[i].math - students[j].math);
            int diff_english = abs(students[i].english - students[j].english);
            int diff_total = abs(students[i].total - students[j].total);

            if (diff_chinese <= 5 && diff_math <= 5 && diff_english <= 5 && diff_total <= 10)
            {
                if (strcmp(students[i].name, students[j].name) < 0)
                {
                    printf("%s %s\n", students[i].name, students[j].name);
                }
                else
                {
                    printf("%s %s\n", students[j].name, students[i].name);
                }
            }
        }
    }

    return 0;
}
