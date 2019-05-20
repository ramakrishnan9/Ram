#include<stdio.h>
int main()
 {
 int arms=153,check,rem,sum=0;
 scanf("%d%d",&n,&m);
 while(n!=m)
 {
  rem=n%10;
  sum=sum+(rem*rem*rem);
  check=n/10;
 }
printf("The amstrong number is:%d",arms);
}
return 0;
}
