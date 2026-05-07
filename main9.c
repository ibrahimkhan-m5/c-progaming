#include<stdio.h>
int main()
{
  float b,e,m;
  printf("enter bangla marks=");
  scanf("%f",&b);
  printf("enter english marks=");
  scanf("%f",&e);
  printf("enter math marks=");
  scanf("%f",&m);
if(b<33||e<33||m<33){
    printf("you are failed");
}
 else if((b+e+m)/3<40){
    printf("you are  failed for less percentage");
}
else{
    printf("you are passsed");
}

    return 0;
}
