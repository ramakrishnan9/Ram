#include<stdio.h>
int main()
 {
 int sum=0,n,i,j;
 printf("Enter the number:");
 scanf("%d%d",&n1,&n2);
 for(i=0;i<=n;i++)
  {
   for(j=0;j<=n2;j++)
     {
      if(n1<n2!=0)
       {
       n1=n%10;
       sum=sum+(n1*n1*n1);
       n=n/10;
       }
      }  
       if(sum==n)      
       {
       printf("The amstrong number is:%d",sum)
       }
     }
     return 0;
     }
