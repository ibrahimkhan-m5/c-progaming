#include <stdio.h>
int main() {
int i,n,product=1,sum=0;
printf("enter a number=");
scanf("%d",&n);
for(i=1;i<=n;i++){
    product=product*i;
   sum=sum+product;

}
 printf("factorial of %d is %d\n",n,product);
 printf("sum of factorial %d is %d",n,sum);



return 0;
}

