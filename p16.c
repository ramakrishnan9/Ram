#include<stdio.h>
int main()
 {
 int n,check,rem,sum=0,i,m;
 scanf("%d%d",&n,&m);
 for(i=n;i<=m;i++)
 {
  if(n!=m)
 {
    rem=i%10;
  sum=sum+(rem*rem*rem);
  check=i/10;
  }
  printf("yes",i);
 }
    return 0;
 }
