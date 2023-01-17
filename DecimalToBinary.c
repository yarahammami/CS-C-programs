// This C Program prints the number given by the user in binary.
#include <stdio.h>

int main(){
 int binary[10],number,i;  
  
printf("Enter the number to convert: ");    
scanf("%d", &number);   
  
for(i = 0; number > 0; i++){  
  
binary[i]=number%2;    
number=number/2;    
}    
printf("\n Binary of Given Number is : ");    
for(i = i - 1;i >= 0; i--){  
  
printf("%d", binary[i]);    
}  
  
return 0;  
}
// OUTPUT EXAMPLE
// Enter the number to convert: 72
// Binary of Given Number is : 1001000



