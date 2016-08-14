#include <stdio.h>

int main(void) 
{
	int n, i;
    unsigned long long f = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);

    if (n < 0)
        printf("Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=n; ++i)
        {
            f= f*i;              
        }
        printf("Factorial of %d = %llu", n, f);
    }

    return 0;
}
