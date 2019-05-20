#include<stdio.h>
int main()
 {
 int n,check,rem,sum=0,i,m;
 scanf("%d%d",&n,&m);
 i=n;
 while(n!=m)
 {
    rem=i%10;
  sum=sum+(rem*rem*rem);
  check=i/10;
  } 
  printf(sum);
 i++;
 }
    return 0;
 }
