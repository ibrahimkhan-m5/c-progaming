#include<stdio.h>
void swap(int a,int b);
int main(){
    int x=3,y=5;
    swap(x,y);
    printf("x is %d and y is %d\n",x,y);



    return 0;
}
void swap(int a,int b){
int t=b;
b=a;
a=t;
printf("a is %d and b is %d\n",a,b);

}