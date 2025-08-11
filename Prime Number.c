#include <stdio.h>
#include <math.h>

int main()
{
    int n, count = 0, num = 1,i;
    printf("Enter how many numbers to check: ");
    scanf("%d", &n);

    while (count < n)
    {
        int isPrime = 1; 
        if (num < 2) 
            isPrime = 0;
        else
        {
            for ( i = 2; i <= sqrt(num); i++)
            {
                if (num % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime)
            printf("%d\n",num);   // print number if prime
        else
            printf("*\n");         // print '*' if not prime

        num++;
        count++;
    }
    return 0;
}
