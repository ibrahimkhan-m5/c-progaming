#include<stdio.h>
void math(float a, float b);
int main(){
    float x,y,avg;
    
    printf("enter 2 numbers=");
    scanf("%f %f",&x,&y);
    avg=(x+y)/2.0;
    printf("avarage number is %.2f\n",avg);
    math(x,y);


    return 0;
}
void math(float a, float b){
    int i,n,table;
    float sum;
    sum=a+b;
    printf("sum is %.2f\n",sum);
    printf("enter a number for table=");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        table=i*n;
        printf(" %d=%d*%d\n",table,i,n);
    }



}