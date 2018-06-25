/******************************************************************************

						8920 ACCEPTED

*******************************************************************************/
#include <stdio.h> 
#include "math.h"
int a,b,n;

//getInput function to retrieve and check input
int getInput(){
    int inputNumber;
    while(1){
        scanf("%d",&inputNumber);
        if(inputNumber > 0 && inputNumber < 60000) 
            break;
        else printf("\n Outside bounds \n");
    }
    return inputNumber;
}

//Main Method
int main(){
    
    a = getInput();
    b = getInput();
    n = getInput();
    
    // get value of a/b as double
    double decimal = a;
    decimal /= b;
    
    // Remove any values before the decimal point
    // as answer is an integer, a/b is always round down.
    // Therefore, it is removed from the double value
    long int answer = a/b;
    decimal -= answer;
    
    //By multiplying up by 10^n and applying %10 we get the final answer
    decimal = decimal*pow(10,n); 
    answer = decimal;
    answer = answer%10;
    printf("%d",answer);
}

