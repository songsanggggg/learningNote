#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[30];
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
    Student best_student;

    best_student.total = -1;

    for (int i = 0; i < N; i++)
    {
        scanf("%s %d %d %d", students[i].name, &students[i].chinese, &students[i].math, &students[i].english);
        students[i].total = students[i].chinese + students[i].math + students[i].english;

        if (students[i].total > best_student.total)
        {
            best_student = students[i];
        }
    }

    printf("%s %d %d %d\n", best_student.name, best_student.chinese, best_student.math, best_student.english);

    return 0;
}
