
#include <stdio.h>

int main() {
    int i,n,prime=1;

    printf("enter a number=");
    scanf("%d",&n);

    if(n==0 || n==1){
        prime=0;
    }
    else{
        while(i<n){
            if(n%i==0 ){
                prime=0;
                break;
            }
            i++;
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
