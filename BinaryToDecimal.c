// This C Program converts a given binary number to a decimal.
#include <stdio.h>   
int main(){   
  
    int num, binaryNum, decimalNum = 0, base = 1, rem;  
    printf (" Enter a binary number: ");  
    scanf (" %d", &num);
  
    binaryNum = num; 
      
    while ( num > 0){  
      
        rem = num % 10;  
        decimalNum = decimalNum + rem * base;  
        num = num / 10; 
        base = base * 2;  
    }  
  
   printf (" \n The decimal number is %d.\n", decimalNum);   
    return 0;
} 
// OUTPUT EXAMPLE
// Enter a binary number: 101010
// The decimal number is 42.



