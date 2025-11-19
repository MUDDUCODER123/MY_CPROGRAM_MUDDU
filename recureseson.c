#include<stdio.h>
int factorial(int n){
    printf( "muddu_king_18\n");
    if(n==0){
        return 1;
    }
return n*factorial(n-1);
}
int main(){
    factorial(100);
}
