 #include <stdio.h>
 int haspassed(int m1,int m2,int m3){
  if(m1>=40 &&m2>=40 &&m3>=40) 
    return 1;
    else
    return 0;
 }
 int main(){
     int m1,m2,m3;
     float averga;
      
      printf("enter for subject 1:");
      scanf("%d",&m1);
      printf("enter for subject 2:");
      scanf("%d",&m2);
      printf("enter for subject 3:");
      scanf("%d",&m3);
      averga=(m1+m2+m3)/3.0;
      printf("\naverga marks =%.2f\n",averga);
       if(haspassed(m1,m2,m3))
         printf("enter pass\n");
         else
          printf("enter fail\n");
      return 0;
 }
