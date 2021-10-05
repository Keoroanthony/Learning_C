#include <stdlib.h>
#include <stdio.h> 
int main( void ) {
    int i, j;
    int row, column;
    int my_arr1[4]={1,2,3,4};
    int my_arr2[2][3]={{5,6,7},{8,9,10}};
    char my_arr3[5]={'t','o','n','y'};
   
    printf("One dimension array \n");

    for (i = 0; i < 4; ++i) {

       printf(" %d \n", my_arr1[i]);
    }

    printf("Two dimension array \n");
    for(row = 0; row < 2; row++){
        for (column = 0; column < 3; column++)
        {
          
            printf(" %d,", my_arr2[row][column]);
        }
        
        printf("\n");
        
    }
    printf("Char Type array \n");
     for(char k = 0; k < 4; ++k){
        printf("%c \n", my_arr3[k]);
    }


    return 0;
}
