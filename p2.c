#include<stdio.h>
void main()
 {
  int a,b,c;
   printf("Enter the number:");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b)
   {
    printf("The largest number is:%d",a);
    }
    else
    {
    printf("The largest number is:%d",b);
    }
    else if(c>a)
     {
     printf("The largest number is:%d",c);
     }
     return 0;
    } 
