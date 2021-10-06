#include<stdio.h>  
int main(){  
int a=10,b=20,*p1=&a,*p2=&b; 
printf("Showing the address of a: %d \n", &a); 
printf("Showing the address of b: %d \n", &b);
  
printf("Before swap: *p1=%d *p2=%d",*p1,*p2);  
*p1=*p1+*p2; // p1 = 30 
*p2=*p1-*p2; // p2 = 10  
*p1=*p1-*p2; // p1 = 20
printf("\nAfter swap: *p1=%d *p2=%d",*p1,*p2);  
  
return 0;  
}  