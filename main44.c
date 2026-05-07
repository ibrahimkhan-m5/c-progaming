#include<stdio.h>
void b();
void a();
int main(){
char ch;

printf("press b for bangladesh= \n");
printf("press a for america= \n");
scanf("%c",&ch);
if(ch=='b'){
    b();
}
else if(ch=='a'){
    a();
}
else{
    printf("wrong choice");
}
    return 0;
}
void b(){
    printf("salam\n");
   
}
void a(){
   printf("hi\n");
}