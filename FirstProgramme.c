#include <stdio.h>
int main()
{
 /* my first program in C */
 int marks; 
 printf("Enter marks: "); 
 scanf("%d", &marks);
if (marks>=70){
    printf("\a Passed!!");
}else{
    printf("failed \n :(");
}
 return 0;
}
