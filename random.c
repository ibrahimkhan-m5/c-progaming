#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(0));
int random_number=(rand()%100)+1;
int guess,no_of_guess=0;

do{
    printf("enter a guess number=");
    scanf("%d",&guess);

    if(guess>random_number){
        printf("enter lower number\n");
    }
    else if(guess<random_number){
        printf("enter higher number\n");
    }
    else{
        printf("you guessed the number\n");
    }
no_of_guess++;

}while(guess!=random_number);
printf("you guessed the number in %d attemps",no_of_guess);


    return 0;
}