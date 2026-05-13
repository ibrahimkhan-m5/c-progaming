#include<stdio.h>
int fib(int n);
int main(){
    int n;
    printf("enter a number=");
    scanf("%d",&n);


 printf("final fibonacci number is %d\n",fib(n));

    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    int a=fib(n-1);
    int b=fib(n-2);
    int x=a+b;
    printf("fibonacci is %d+%d=%d\n",a,b,x);
    return x;

}
