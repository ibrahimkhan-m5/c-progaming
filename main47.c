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
    int x=fib(n-1)+fib(n-2);
    printf("fibonacci number is %d\n",x);
    return x;

}