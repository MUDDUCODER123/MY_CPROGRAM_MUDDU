#include <stdio.h>
int main() {
    int marks;
    printf("enter the student marks\n");
    scanf("%d\n",&marks);
    if( marks >=90){
        printf("Grade A:\n");
    }
     else if(marks >=89){
        printf("GradeB:\n");
    }
    else if(marks >=74){
        printf("Grade C\n");
    }
    return 0;
}
