#include <stdio.h>
#include<math.h>
int main(){
    int d,x1,x2,y1,y2;
    printf("enter the value all\n");
    scanf("%d %d %d %d\n",&x1,&x2,&y1,&y2);
    d= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("the stright-line distance betweenthe line is=%d",d);
    
}
