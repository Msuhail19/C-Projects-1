/******************************************************************************

                            8914 ACCEPTED

*******************************************************************************/

#include <stdio.h>
#define PI 3.14

float sumOfAreas, sumOfCirc;
int radius1, radius2;

//Allows input of radius and checks for validity - radius1<=radius2
void inputRadius(){
    while(1){
    scanf ("%d", &radius1);
    scanf ("%d", &radius2);
    if(radius1<=radius2) break;
    printf("\nInput Invalid\n");
    }
}

//Main Method
void main (){
    inputRadius();
    //Calculates the sum of all areas and circumferences by incrementing radius 1
    //Until radius 1 is equal to radius2
    while (radius1 <= radius2){
      sumOfAreas += PI * radius1 * radius1;
      sumOfCirc += 2 * PI * radius1;
      radius1++;
    }
  printf ("%.3f\n%.3f", sumOfAreas,  sumOfCirc);
}

