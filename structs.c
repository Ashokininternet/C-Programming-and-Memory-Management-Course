#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    struct Student
    {
        char name[16];
        char major[11];
        int age;
        double gpa;
    };
    struct Student student1;
    student1.gpa = 21.1;
    student1.age = 16;
    strcpy(student1.name, "Ashok");
    strcpy(student1.major, "CS");

    struct Student student2;
    student2.gpa = 101.1;
    student2.age = 16;
    strcpy(student2.name, "X");
    strcpy(student2.major, "CS");

    printf("%s is a %s major at the age of %d with %.1f GPA \n", student1.name, student1.major, student1.age, student1.gpa);
    printf("%s is a %s major at the age of %d with %.1f GPA \n", student2.name, student2.major, student2.age, student2.gpa);

    return 0;
}