#include <stdio.h>
int main() {   
   char name[100];
    int x, y, z;
    printf("Enter your name: ");  
    scanf("%s", &name);
    printf("Enter year of birth: ");  
    scanf("%d", &x);
    printf("Enter current year: ");  
    scanf("%d", &y);

    z = y - x;
    
    // displays output
    printf("%s your current age is: %d",name, z);
    // printf("\r this is my code");
    
    return 0;
}