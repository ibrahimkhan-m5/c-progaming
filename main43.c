#include<stdio.h>
float avarage(float a,float b,float c);
int main()
{
    float a,b,c;
    printf("entre 1st number=");
    scanf("%f",&a);
    printf("entre 2nd number=");
    scanf("%f",&b);
    printf("entre 3rd number=");
    scanf("%f",&c);
    printf("avarage number is=%.2f",avarage(a,b,c));


    return 0;
}
float avarage(float a,float b,float c){
    return (a+b+c)/3.0;
}