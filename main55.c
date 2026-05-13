#include<stdio.h>
int sum(int *a,int *b);
int main(){
    int a,b;
    printf("enter two numbers=");
    scanf("%d %d",&a,&b);
    printf("sum is %d\n",sum(&a,&b));
    printf("the value of x is %d",a);

    return 0;
    
}
int sum(int *a,int *b){
     *a=5;
        return *a+*b;
    }