
#include <stdio.h>

int main()
{
    int marks;

    printf("Enter the marks scored in percentage:\n");
    scanf("%d", &marks);

    if (marks >= 75)
        printf("Grade = Distinction");
    else if (marks >= 60)
        printf("Grade = First Class");
    else if (marks >= 45)
        printf("Grade = Second Class");
    else if (marks >= 35)
        printf("Grade = Pass Class");
    else
        printf("Grade = Fail Class");

    return 0;
}
