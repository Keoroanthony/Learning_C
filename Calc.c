#include <stdio.h>
#include <stdlib.h>                                                                             //For functions like system() and exit()
#include <windows.h>                                                                            //For function Sleep()
#include <math.h>                                                                               //For functions like pow(), sin(), cos(), tan()
int main(void)
{
    int i = 1;             /*                                    */
    char Opt;              /*   Declaring the type variables     */
    float Num1, Num2 ,ans; /*                                    */
    char oper;             /*                                    */
    printf("Welcome to Tony's calculator.\n");
    while (1){                                                                                  //While loop that never ends, unless exit(0) is used
        printf("\n\nWhich mode do you want to use?\n1.Maths operations(+,-,/,*,^)\n2.Exit\n\nYour input: ");
        scanf(" %c", &Opt);
        if (Opt == '1'){
        printf("Welcome to Normal maths operation Mode.\n\nYour two numbers: ");
            scanf("%f%f", &Num1, &Num2);
            printf("\nAVAILABLE SYMBOLS:\n\n+ for Addition\n- for Subtraction\n/ for Division\n* for Multiplication\n^ for Power function\n\nYour input: ");
            scanf(" %c", &oper);
            if (oper == '+'){
                ans = (Num1 + Num2);
                printf("Here is your answer:\n%f  %c %f = %.5f (To 5 decimal places)\n\n", Num1, oper, Num2, ans);
                Sleep(2450);
                } else if (oper == '-'){
                ans = (Num1 - Num2);
                printf("Here is your answer:\n%f  %c %f = %.5f (to 5 decimal places)\n\n", Num1, oper, Num2, ans);
                Sleep(2450);
                } else if (oper == '/'){
                ans = (Num1 / Num2);
                printf("Here is your answer:\n%f  %c %f = %.5f (to 5 decimal places)\n\n", Num1, oper, Num2, ans);
                Sleep(2450);
                } else if (oper == '*'){
                ans = (Num1 * Num2);
                printf("Here is your answer:\n%f  %c %f = %.5f (to 5 decimal places)\n\n", Num1, oper, Num2, ans);
                Sleep(2450);
                } else if (oper == '^'){
                ans = (pow (Num1 , Num2));
                printf("Here is your answer:\n%f  %c %f = %.5f (to 5 decimal places)\n\n", Num1, oper, Num2, ans);
                Sleep(2450);
                } else{
                    printf("\n\nYour input operator is incorrect; ERROR 1 Sintek\n");
                    Sleep(2450);
                    system("cls");
                }
                }
            
            if (Opt == '2'){
                printf("Thank you for using my calculator. Hope to see you again!!");
                Sleep(1990);
                system("cls");
                exit(0);
            }
            
            if (Opt != '1' && Opt!= '2'){
                    printf("Wrong Option. Please retype your option correctly");
                    Sleep(2450);
                    system("cls");
                }
        }
}