#include<stdio.h>
int main(){
    int x=5;
    int *ptr=&x;
    int **ptr2=&ptr;
    printf("value of x is %d\n",*ptr);
    printf("value of x is %d\n",**ptr2);


    return 0;
}