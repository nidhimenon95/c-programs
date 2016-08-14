#include <stdio.h>

int main(void) 
{
	int a,b,max;
	printf("Enter a:",a);
    scanf("%d",&a);
    printf("Enter b:",b);
    scanf("%d",&b);
 
    if(a > b)
         max = a;
    else
         max = b;
 
    printf("Max is:%d",max);
    return 0;
}
