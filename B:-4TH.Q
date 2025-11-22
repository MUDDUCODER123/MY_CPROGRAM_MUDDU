#include<stdio.h>
int main(){
    char first[40]="mudduu",last[40]="prasad",full[80];
    int i=0, j=0,length=0, maxlength=20;
    while(first[i] !='\0'){
        full[length]=last[i];
        i++;
        length++;
    }
    full[length]=' ';
    length++;
    while(last[j]!='\0'){
        full[length]=last[j];
        j++;
        length++;
    }
    full[length]='\0';
    if (length<=maxlength){
        printf("\nfull name: %s\n",full);
        printf("\nlength of full name:%d\n",length);
        printf("fit on screen!\n");
    }
    else{
    printf("\nfull name:%s\n",full);
    printf("\nlength of full name;%d\n",length);
    printf("does not fit on screen!\n");
    }
    return 0;
}
