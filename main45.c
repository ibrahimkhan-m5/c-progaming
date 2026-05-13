#include<stdio.h>
int sum(int n);
int main(){
    int x;
    printf("enter a number=");
    scanf("%d",&x);

    printf("total sum is %d\n",sum(x));

    return 0;
}
int sum(int n){
   if(n==1||n==0){
        return 1;
    }
   int  sumNm1=sum(n-1);
   int sum=sumNm1+n;
   printf("%d+%d=%d\n",sumNm1,n,sum);
   return sum;

}
