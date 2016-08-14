#include <stdio.h>

int main(void) 
{
	int length, breadth, area;
 
   printf("\nEnter the Length of Rectangle :",length);
   scanf("%d", &length);
 
   printf("\nEnter the Breadth of Rectangle :",breadth);
   scanf("%d", &breadth);
 
   area = length * breadth;
   printf("\nArea of Rectangle : %d", area);
 
   return (0);
}
