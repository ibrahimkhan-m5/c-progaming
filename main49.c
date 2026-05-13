#include<stdio.h>
#include<string.h>

int main() {

    char password[20];

    int i;


    for(i = 1; i <= 3; i++) {
            printf("Enter password: ");
        scanf("%s", password);



        if(strcmp(password, "1234") == 0) {

            printf("Login successful!\n");

            break;
        }

        else {

            printf("Wrong password!\n");

        }
    }

    if(i >3) {

        printf("Account locked!\n");
    }

    return 0;
}
