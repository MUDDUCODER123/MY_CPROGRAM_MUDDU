#include<stdio.h>
 union data{
     int i;
     float f;
     char name[20];
 };
 int main(){
     union data d;
      d.i=10;
      printf("integer %d\n",d.i);
      d.f=20.8;
      printf("float %.2f\n",d.f);
      return 0;
}
