#include<stdio.h>
// function prototype
int sum(int x,int y);


int main(){

int a=2,b=3;
int c=sum(a,b);
printf("the sum is %d\n",c);
int a2=5,b2=10;
int c2=sum(a2,b2);
printf("the sum is %d\n",c2);


    return 0;
}
//function defination
int sum(int x,int y){
    return x+y;
}