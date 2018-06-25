/******************************************************************************

                         8915 OUTPUT LIMIT REACHED

*******************************************************************************/
#include <stdio.h>
int input = 0;

//getinput and call print method. Loops until a negative is entered.
void getInput(){
    while(1){
        scanf ("%i", &input);
        if(input>=0){
            printOutput();
        }
        else if(input = -1){
            printf("program ended");
            break;
        }
    }
}

//Print charachters
void printOutput(){
    printf ("%c", input);
}
//Main method
int main(){
        getInput();
        printf("\nInput ended.\n");
}



