#include<stdio.h>
  enum week {
      monday,
      tuesday, 
      wednesday,
      thursday,
      friday,
      saturday,
      sunday,
  };
  int main(){
      enum week 
      today = thursday;
      printf(" today is %d\n",today);
      return 0;
  }
