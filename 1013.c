/******************************************************************************

                            8913 ACCEPTED

*******************************************************************************/
int input = 0, marks1 = 0, marks2 = 0, marks3 = 0;

//Where marks1 = 85+,marks2 is 60 to 84,marks3 is below 60

#include <stdio.h>

//Input method. Check Input for compliance with scheme
void getInteger(){
        scanf ("%d", &input);
        if(input<0) {
            printf("\nInvalid number Entered\n");
            getInteger();
        }
}

//Print the result
void printMarks(){
    printf (">=85:%d\n60-84:%d\n<60:%d", marks1, marks2, marks3);
}

//Main Method
void main (){
    //The loop records the number of each type of mark.
  while (1){
    getInteger();
        if (input == 0)
	        break;
        if (input >= 85)
	        marks1++;
        else if (input > 60)
	        marks2++;
        else
	        marks3++;
    }
    printMarks();
}












