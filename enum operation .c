#include<stdio.h>
  enum operation {
      add= 1,
      subtract,
      multiply,
      divide
  };
  int main(){
      enum operation op=1;
      if(op==add)
        printf("you chose addition");
     else if (op==subtract)
          printf("you chouse multiply");
    else
    printf("other operation");
    return 0;
