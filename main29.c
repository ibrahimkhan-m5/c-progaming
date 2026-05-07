#include <stdio.h>
int main() {

int i,n,t,sum=0;
printf("enter a number=");
scanf("%d",&n);
for(i=1;i<=10;i++){
    t=i*n;
printf("%d*%d=%d\n",i,n,i*n);
sum=sum+t;
}
printf("sum is=%d",sum);



return 0;
}

