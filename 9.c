#include <stdio.h>

int main(void) {
	int i, n;
 
    printf("Range upto: ");
    scanf("%d", &n);
 
    printf("All even numbers from 1 to %d are: \n", n);
 
    for(i=2; i<=n; i+=2)
    {
        printf("%d\n",i);
    }
 
    return 0;
}
