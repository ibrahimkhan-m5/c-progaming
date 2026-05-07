#include<stdio.h>
int main()
{
char ch;
printf("enter a charecter=");
scanf("%c",&ch);
printf("the charecter is=%c\n",ch);
printf("the value of charecter is=%d\n",ch);
if(ch>=97&&ch<=122){
    printf("this is a lowercase");
}
else{
    printf("this is not a lowercase");
}






    return 0;
}
