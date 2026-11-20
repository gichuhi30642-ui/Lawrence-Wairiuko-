#include <stdio.h>
#include <stdbool.h>

int main(){

    //while loop is used to repeat a block of code as long as a specified condition is true.
    bool isRunning = true;
    char response;

    while(isRunning){
        
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &response);

        if(response == 'n' || response == 'N'){
            isRunning = false;
            printf("Exiting the loop.\n");
        }
        else if(response == 'y' || response == 'Y'){
            printf("Continuing the loop.\n");
        }
        else{
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
            
    }
    
    return 0;
}