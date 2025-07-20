#include <stdio.h>
#include <stdbool.h>

/**
 * REF:
 * https://www.wikihow.com/Compile-a-C-Programc-Using-the-GNU-Compiler-(GCC)

 */
int main(){

 /**************************
 * CONSTANTS
 */
    const int loopInitalizer = 0;
    const float chkMODDiamond = 0.0;


/*********************************
 * FUNCTIONAL VARIABLES - CHANGE AS NEEDED
 * */ 

    

/********************************
 * TECHNCIAL VARIABLES - DO NOT CHANGE
 */
    int nextElementLength = 0;
    bool decrement = false;
    float badResult = 0.0;
    int maxLength = 0; //max length of longest line
    int height = 0; //number of lines to print

/*********************************
 * USER INPUT
 */

 printf("input max rows of diamond: ");
 scanf("%d", &height);

 printf("input number of elements / row:");
 scanf("%d", &maxLength);
/*****************************
 * INSTRUCTION SET
 */

//detect when inputs are NFG to produce a diamond
badResult = height % maxLength;

if(badResult > chkMODDiamond){
    printf("bad values for processing diamond - MOD IS ");
    printf("%.6f\n",badResult);
    return -1;
}


 //FOR loop creates lines(rows).
for(int a = loopInitalizer; a < height; a++){

    //prepare for decrement once height has been reached
    if(nextElementLength == maxLength){
        decrement = true;
        nextElementLength--;
    }

    if(decrement == false)
        //spur another element for next row until max length
        nextElementLength++;

    
    //FOR loop creates elements in a row
    for(int b = loopInitalizer; b < nextElementLength; b++){
        printf("*");
    }
    printf("\n");

    //starts to decrement length
    if(decrement == true)
        nextElementLength--;

}

    return 0;
}
