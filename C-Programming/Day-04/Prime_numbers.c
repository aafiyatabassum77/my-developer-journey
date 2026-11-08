#include <stdio.h>

int main() 
{
    int n, i, count = 0, num = 2;

    printf("Enter how many prime numbers to generate: ");
    scanf("%d", &n);

    printf("First %d prime numbers are:\n", n);
    while (count < n) 
    {
        int isPrime = 1; // Assume number is prime
        for (i = 2; i * i <= num; i++) 
        {
            if (num % i == 0) 
            {
                isPrime = 0; // Not a prime
                break;
            }
        }
        
        if (isPrime) 
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n"); 
    return 0; // Standard exit code for success
}
