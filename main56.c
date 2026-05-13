#include<stdio.h>
void square(int n);
void _square(int* n);
int main(){
    int x=4;
    square(x);
    printf("number is=%d\n",x);
    _square(&x);
    printf("number is=%d\n",x);
return 0;

}
void square(int n){
     n=n*n;
    printf("square is=%d\n",n);
}
void _square(int* n){
     *n=(*n)*(*n);
    printf("square is=%d\n",*n);
}
