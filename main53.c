#include<stdio.h>
int main(){
    int x,*ptr;
    ptr=&x;
    *ptr=0;
    printf("%d\n",x);
    printf("%d\n",*ptr);
    *ptr+=5;
    printf("%d\n",x);
    printf("%d\n",*ptr);
    (*ptr)++;
    printf("%d\n",x);
    printf("%p\n",ptr);




    return 0;
}