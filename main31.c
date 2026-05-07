#include <stdio.h>
int main() {
    int i=1,n,product=1,sum=0;
 printf("enter a number=");
scanf("%d",&n);
while(i<=n){

product=product*i;
sum=sum+product;

    i++;
}
 printf("factorial of %d is %d\n",n,product);
 printf("sum of factorial %d is %d",n,sum);


return 0;
}

