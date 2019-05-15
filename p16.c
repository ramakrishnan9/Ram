#include<stdio.h>
int main()
 {
 int rem,sum=0,n
 scanf("%d",&n);
 while(n!=0)
  {
   rem=n%10;
   sum=sum+rem*rem*rem;
   n=n/10;
   }
   if(sum==n)
     {
     printf("Yes");
     }
     else
     {
     printf("No"):
     }
     return 0;
   }
     
