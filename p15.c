#include<stdio.h>
int main()
 {
  int n,re,sum=0;
  scanf("%d",&n);
  while(n>=0)
   {
   n=n%10;
   re=n*n*n;
   sum=sum+re;
   n=n/10;
   }
 if(sum==n)
 {
   printf("The Amstrong Number is:%d",sum);
  }  
 return 0;
}
