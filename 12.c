#include <stdio.h>

int main(void) {
int i,n;
float marks, sum = 0,avg;
   
    printf("Enter total numbers of student:",n);
    scanf("%d",&n);
   
    for(i=1;i<=n;i++)
    {
       printf("Enter marks of student:",i);
       scanf("%f",&marks);

       sum = sum + marks;
       avg = sum/n;
    }

    printf("Average marks: %f",avg);

    return 0;
}
