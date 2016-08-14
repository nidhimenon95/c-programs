#include <stdio.h>

int main(void) 
{
	int n, o, rem, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    o = n;

    while (o != 0)
    {
        rem = o%10;
        result += rem*rem*rem;
        o /= 10;
    }

    if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
