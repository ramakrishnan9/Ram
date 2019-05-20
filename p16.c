#include<stdio.h>
int main()
 {
 int check,rem,sum=0,n,m;
 scanf("%d%d",&n,&m);
 while(n!=m)
 {
  rem=n%10;
  sum=sum+(rem*rem*rem);
  check=n/10;
  b=sum;
 }
 for(i=n;i<=m;i++)
 {
  if(b<=m)
  {
printf("The amstrong number is:%d",b);
}
 }
return 0;
}
