
#include <stdio.h>

int main() {
    int i=2,n,prime=1;

    printf("enter a number=");
    scanf("%d",&n);

    if(n==0 || n==1){
        prime=0;
    }
    else{
        do{
            if(n%i==0){
                prime=0;
                break;
            }
            i++;

        }while(i<n);
    }

    if(prime){
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }

    return 0;
}
