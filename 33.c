#include <stdio.h>

int main(void)
{
	double fn, sn, p;
    printf("Enter two numbers: ");

    scanf("%lf %lf",&fn, &sn);  
 
    p = fn * sn;  

    printf("Product = %.2lf", p);
    
    return 0;
}
