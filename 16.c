#include <stdio.h>

int main(void) 
{
	int n;
  
    printf("Enter number:",n);
    scanf("%d",&n);

    if(n%2==0)
         printf("%d is even number.",n);
    else
         printf("%d is odd number.",n);
  
    return 0;
}
