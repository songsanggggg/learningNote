#include <stdio.h>

typedef struct
{
    int id;
    int academic;
    int expand;
    double total_score;
} Student;

int get_total_score(Student *s)
{
    return s->academic + s->expand;
}

int is_excellent(Student *s)
{
    if (get_total_score(s) > 140 && s->academic * 7 + s->expand * 3 >= 800)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int N;
    scanf("%d", &N);

    Student students[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d %d", &students[i].id, &students[i].academic, &students[i].expand);
        students[i].total_score = students[i].academic * 0.7 + students[i].expand * 0.3;
    }

    for (int i = 0; i < N; i++)
    {
        if (is_excellent(&students[i]))
        {
            printf("Excellent\n");
        }
        else
        {
            printf("Not excellent\n");
        }
    }

    return 0;
}
