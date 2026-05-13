#include<stdio.h>
void dowork(int a ,int b, int* sum, float*avg,int *prod);
int main(){
    int a=3,b=2,sum,prod;
    float avg;
    dowork(a,b,&sum,&avg,&prod);
    printf("sum is= %d\navg is=%.2f\nprod is =%d\n",sum,avg,prod);


    return 0;
}
void dowork(int a ,int b, int* sum, float* avg, int *prod){
    *sum=a+b;
    *avg=(a+b)/2.0;
    *prod=a*b;


}