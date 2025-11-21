 #include<stdio.h>
int swap( int balan1,int balan2){
    int temp=balan1;
    balan1=balan2;
    balan2=temp;
    printf("%d %d",balan1,balan2);
   }
int main(){
    int balan3,balan4;
    printf("Enter the value of balances:\n");
    scanf("%d%d",&balan3,&balan4);
   swap(balan3,balan4);
}
