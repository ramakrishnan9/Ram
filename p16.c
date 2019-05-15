#include<stdio.h>
int main()
 {
 int n,check,rem,sum=0;
 scanf("%d",&check);
 while(check!=0)
 {
  rem=check%10;
  sum=sum+(rem*rem*rem);
  check=check/10;
 }
 if(sum==check)
 {
  printf("Yes");
 }
 else
 {
  printf("No");
 }
 return 0;
}
