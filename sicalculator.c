#include<stdio.h>
int sicalculator(){
    int p,t,r,si;
    printf("enter the principle amount\n");
    scanf("%d",&p);
    printf("enter the years\n");
    scanf("%d",&t);
    printf("enter the rate of interst\n");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf("simple interst=%d\n",si);
}
   int main(){
       sicalculator();
   }
