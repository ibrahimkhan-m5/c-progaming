#include<stdio.h>
int main(){
int age=22;
int *ptr=&age;
int **ptr2=&ptr;
printf("the value of i is %p\n",age);
printf("the address lf i is %p\n",&age);
printf("the address lf i is %p\n",ptr);
printf("the value of address inside ptr is %d\n",*ptr);
printf(" %d\n",*(&age));
printf(" %d\n",**(&ptr));


    return 0;
}