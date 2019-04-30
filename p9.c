#include<stdio.h>
int main()
 {
  int i,n;
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  if(n%i==0)
  {
   printf("The prime number is:%d",n);
  }
  else
  {
   printf("This is not prime:%d",n);
  }
 }
 return 0;
}
