#include <stdio.h>
#include <string.h>

int main()
{
    float total;
    char student[11];
    char stu;
    scanf("%f", &total);
    printf("Enter Yes if you're a student\n");
    getchar();
    fgets(student, 11, stdin);
    student[strcspn(student, "\n")] = 0;
    // printf("%s", student);
    if (strcmp("Yes", student) == 0)
    {
        printf("Student!\n");
    }
    else
    {
        printf("D: not student!\n");
    }
}