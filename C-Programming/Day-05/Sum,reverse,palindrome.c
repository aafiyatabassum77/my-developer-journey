#include <stdio.h>

int main()
{
    int number, remainder, sum = 0, reverse = 0, given;
    
    printf("Input a number:\n");
    scanf("%d", &number);
    
    given = number;
    
    while (number > 0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    
    if (given == reverse)
    {
        printf("%d is a palindrome\n", given);
    }
    else
    {
        printf("%d is not a palindrome\n", given);
    }
    
    return 0;
}
#include <stdio.h>

int main()
{
    int number, remainder, sum = 0, reverse = 0, given;
    
    printf("Input a number:\n");
    scanf("%d", &number);
    
    given = number;
    
    while (number > 0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    
    if (given == reverse)
    {
        printf("%d is a palindrome\n", given);
    }
    else
    {
        printf("%d is not a palindrome\n", given);
    }
    
    return 0;
}
