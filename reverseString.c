// This C Program reverses a string given by the user.
#include <stdio.h>
#include<string.h>
int main(){
  char string[100];
  char reverse[100];
  int begin, end, count = 0;

printf("enter a string :");
  scanf("%s",string);
  
  while(string[count]!= '\0')
    count++;

  end = count - 1;
  for(begin = 0; begin < count; begin++){
    reverse[begin] = string[end];
    end--;
  }
  reverse[begin] = '\0';

  printf("the reversed string is : %s \n",reverse);
  
   return 0;
}
// OUTPUT EXAMPLE
// enter a string :string
// the reversed string is : gnirts



