#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("Enter a:",a);
    scanf("%d",&a);
    printf("Enter b:",b);
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("a is:%d",a);
    printf("b is:%d",b);
    return 0;
}
