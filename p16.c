#include<stdio.h>
int main()
 {
 int n,check,rem,sum=0,i;
 scanf("%d%d",&n,&m);
 for(i=n;i<=m;i++)
 {
  rem=i%10;
  sum=sum+(rem*rem*rem);
  check=i/10;
 }
 if(n!=m)
 {
  printf("yes",sum);
 }
 else
 {
  printf("No");
 }
   return 0;
 }
