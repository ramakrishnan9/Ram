#include<stdio.h>
int main()
 {
 int i,j,n;
 scanf("%d",&n);
 for(i=2;i<=n;i++)
  {
   for(j=2;j<=n;j++)
      {
      if(i%j==0)
       break;
       }
       if(i==j)
       {
       printf("The prime number is:%d",i);
       }
       return 0;
      } 
