#include<stdio.h>
#include<string.h>
int main(){
    char goapl [20];
    printf("enter your string\n");
    scanf("%s",goapl);
    strcat(goapl,"goapl");
    printf("before concat %s",goapl);
    strcat(goapl,"leaend");
    printf("after concat%s\n","leaend");
}
