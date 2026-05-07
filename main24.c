#include <stdio.h>
int main() {
    int i,t, n,sum=0;
printf("enter a number= ");
scanf("%d",&n);
for(i=1;i<=10;i++){
t=i*n;
sum=sum+t;
printf("table of %d is=%d\n",n,t);
}

printf("sum is=%d\n",sum);



    

return 0;
}
