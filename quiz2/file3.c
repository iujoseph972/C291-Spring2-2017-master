/*Debugging quiz - File No: 3 */
/* The program should give out the appropriate message, given the grade as input */

#include<stdio.h>

int main(void) {
    char input;
    printf("Enter the grade (A/B/C/D/F): (Q to Quit) \n");
    input = getchar();
    while(input != 'Q' ){
        if(input == 'F' | input == 'D'){
            printf("You have not passed the course.\\n");
            input = 'Q';
        }
        else if(input == 'A' | input == 'B' | input == 'C') {
            printf("You have passed!\n");
            input = 'Q';
        }
    }
          printf("Quit the menu.\n");
          return 0;
          }
