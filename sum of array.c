//sum of arraya elements
#include<stdio.h>
int main(){
    int rose[5];
    int sum=0;
    for(int i=0;i<5;i++){
        printf("enter the elements\n");
        scanf("%d",&rose[i]);
        sum=sum+rose[i];
    }
printf("sum of elements %d",sum);
}
