#include <stdio.h>

int main(void) {
	float r,a;
 
    printf("Enter radius of circle:");
    scanf("%f",&r);
 
    a = 3.14 * r * r;
 
    printf("Area of circle is: %f",a);
    return 0;
}
