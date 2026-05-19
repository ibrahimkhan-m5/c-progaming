#include<stdio.h>
void address(int *a);
int main(){
    int n=4;
    printf("value of n is %d\n",n);
    address(&n);
    printf("value of n is %d\n",n);


    return 0;
}
void address(int *a){
    *a=(*a)*10;
     printf("final address of n is %d\n",*a);

}