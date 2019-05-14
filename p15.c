#include<stdio.h>
int main()
 {
  int n,re,sum=0;
  scanf("%d",&n);
  while(n>=0)
   {
   re=n%10;
   sum=sum+n*n*n;
   n=n/10;
   }
 if(sum==n)
 {
   printf("The Amstrong Number is:%d",sum);
  }  
 return 0;
}
