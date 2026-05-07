#include<stdio.h>
int main()
{
int i,n;
printf("enter a number=");
scanf("%d",&n);
for(i=1;i<=n;i++){
    if(i==5){
//break;

continue;//skip that point
    }
 printf("%d\n",i);

}

 printf("for loop is done");

    return 0;
}
