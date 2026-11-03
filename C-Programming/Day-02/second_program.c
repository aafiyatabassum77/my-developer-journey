#include <stdio.h>

int main()
{
    char name[50] = "Aafiya Tabassum";
    char course[30] = "BCA";
    int age = 18;
    float percentage = 95.0;
    char grade = 'A';

    printf("STUDENT INFORMATION\n");
    printf("Name: %s\n", name);
    printf("Course: %s\n", course);
    printf("Age: %d\n", age);
    printf("Percentage: %.1f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
