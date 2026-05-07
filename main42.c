#include<stdio.h>
float reactangel(float a,float b);
float square_area(float side);
int main(){

    float a=3.0,b=5.0;
    float side=10.0;
    printf("square area is %.2f\n",square_area(side));
    printf("reactangel  is %.2f\n",reactangel(a,b));
    
}
float reactangel(float a,float b){
    return a*b;
}
float square_area(float side){
    return side*side;
}