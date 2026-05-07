#include<stdio.h>
int main(){
 int n;
 float dr,d,t;
 printf("press 1 to conver dollar to tk\n");
 printf("press 2 to conver dollar to tk\n");
 printf("enter your choice:");
scanf("%d",&n);
switch(n){

case 1:   printf("enter dollar rate= ");
    scanf("%f",&dr);
    printf("enter dollar amount= ");
    scanf("%f",&d);
   t=(d*dr);
   printf("dollar to tk amount =%.2f\n",t);
   break;
case 2:   printf("enter dollar rate= ");
    scanf("%f",&dr);
    printf("enter tk amount= ");
    scanf("%f",&t);
    d=(t/dr);
    printf("tk to dollar amount is=%.2f\n",d);
    break;
    default: printf("nothing matched");




}



    return 0;
}
