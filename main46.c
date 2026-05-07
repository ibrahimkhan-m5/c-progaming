#include<stdio.h>
float convert_temp(float c);
int main(){
    float c;
    printf("enter celcius=");
    scanf("%f",&c);
    convert_temp(c);

    printf("%.0f degre celcius to farenhite is=%.2f",c,convert_temp(c));


    return 0;
}
float convert_temp(float c){
    float far=((9.0*c)/5.0)+32;
    return far;
}