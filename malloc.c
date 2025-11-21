#include <stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr =(int*)malloc(sizeof(int));
    if(ptr == NULL){
        printf("memory not allocated\n");
        return 0;
    }
    *ptr = 10;
printf("value stored %d\n",*ptr);
free(ptr);
return 0;
}
