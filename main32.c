#include <stdio.h>
int main() {
 
int i,n,prime=1;
printf("enter a number=");
scanf("%d",&n);
for(i=2;i<n;i++){
    if(n%i==0){
        prime=0;
    }
}
    if(prime){
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }





return 0;
}

