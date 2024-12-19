#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[100];
    int age;
    int score;
} Student;

Student simulateTraining(Student s)
{
    s.age += 1;
    s.score = (int)(s.score * 1.2);
    if (s.score > 600)
    {
        s.score = 600;
    }
    return s;
}

int main()
{
    int n;
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d", students[i].name, &students[i].age, &students[i].score);
    }

    for (int i = 0; i < n; i++)
    {
        Student updated = simulateTraining(students[i]);
        printf("%s %d %d\n", updated.name, updated.age, updated.score);
    }

    return 0;
}
