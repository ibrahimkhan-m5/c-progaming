#include<stdio.h>
void printaddress(int *a);
int main(){
    int n=4;
    printaddress(&n);

printf("address of n is %u\n",&n);
    return 0;
}
void printaddress(int* a){

printf("address of n is %u\n",a);

}