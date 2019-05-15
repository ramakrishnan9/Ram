include<stdio.h>
int main()
 {
 int n=153,check,rem,sum=0;
 check=n;
  while(check!=0)
 {
  rem=check%10;
  sum=sum+(rem*rem*rem);
  check=check/10;
 }
 if(sum==n)
 {
  printf("yes",sum);
 }
 return 0;
}
