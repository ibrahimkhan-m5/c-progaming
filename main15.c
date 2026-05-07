#include<stdio.h>
int main()
{
int i=0,n,sum=0;
printf("enter a number=");
scanf("%d",&n);
while(i<=n){
   printf("the numbers are =%d\n",i);
    sum=sum+i;
    i++;
    
}
printf("sum is=%d",sum);
    return 0;
}
