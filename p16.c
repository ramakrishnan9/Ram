include<stdio.h>
int main()
 {
 int n,check,rem,sum=0;
 scanf("%d",&n);
 for(i=n;i<=n+1;i++)
 {
  rem=i%10;
  sum=sum+(rem*rem*rem);
  check=i/10;
 }
 if(sum==n)
 {
  printf("yes",sum);
 }
 return 0;
}
