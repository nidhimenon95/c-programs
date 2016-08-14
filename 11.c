#include <stdio.h>

int main(void) {
	int i,n,sum = 0;
 
    printf("Enter any positive number:",n);
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }
 
    printf("Sum of n numbers: %d",sum);
 
    return 0;
}
 