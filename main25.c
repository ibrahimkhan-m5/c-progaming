#include <stdio.h>
int main() {
int i,n,t;
printf("enter a number=");
scanf("%d",&n);

for(i=10;i>=1;i--){         // we can also take i instedt of i>=1
t=n*i;
printf("%d=%dX%d\n",t,n,i);
}






return 0;
}

