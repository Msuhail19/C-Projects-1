/******************************************************************************

                            8916 ACCEPTED

*******************************************************************************/

#include <stdio.h> 

int input1 = 0,input2 = 0,scm,hcf;

//get the two integers
void getInput(){
    //get input and check it is a postive value
    while(1){
        scanf("%d%d",&input1,&input2);
        if(input1>0 && input2>0)
            break;
        else printf("\n-Invalid Input-\n");
    }
}

//Print Values.
void print(){
    printf("%d %d",hcf,scm);
}

//Main Method.
int main(){
    
    //retrieve and check input
    getInput();
    
    //partially compute scm
    scm = (input1 * input2);
    
    //calculate hcf
    hcf = input1;
    //while loop calculates hcf using remainders
    int i=0;
    while(input2!=0){
        i = input2;
        input2 = hcf % input2;
        hcf = i;
    }
    
    //finish computing smallest common multiple
    scm /= hcf;
    
    //print values
    print();
}





