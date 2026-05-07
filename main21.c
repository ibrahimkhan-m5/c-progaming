#include<stdio.h>
int main(){
    int n;
float d,t,dr,tr;
printf("press 1 to convert dollar to tk \n");
printf("press 2 to convert tk to dollar \n");
printf("enter your choice=");
scanf("%d",&n);
if(n==1){
    printf("enter dollar rate= ");
    scanf("%f",&dr);
    printf("enter dollar amount= ");
    scanf("%f",&d);
   t=(d*dr);
   printf("dollar to tk amount =%.2f\n",t);
}
else if(n==2){
    printf("enter dollar rate= ");
    scanf("%f",&dr);
    printf("enter tk amount= ");
    scanf("%f",&t);
    d=(t/dr);
    printf("tk to dollar amount is=%.2f\n",d);
}
else{
    printf("invalid choice");
}



    return 0;
}
