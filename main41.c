#include<stdio.h>
int factorial(int a);
int main(){
    int a;
    printf("enter a number=");
    scanf("%d",&a);
printf("factorial of %d is %d",a,factorial(a));

    return 0;
}
int factorial(int n){
    {if(n==0||n==1)
    return 1;
    }

    return n*factorial(n-1);

}

