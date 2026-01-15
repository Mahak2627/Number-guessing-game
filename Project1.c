//NUMBER GUESSING GAME 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int Random_number;
    srand(time(0));
    Random_number = rand();
    printf("Random Number: %d\n", Random_number);
    int Entered_number,value=0;
    while(Entered_number!=Random_number){
        printf("\nEnter your input:");
        scanf("%d",&Entered_number);
        if (Entered_number>Random_number){
                printf("ENTER A SMALLER VALUE");
                value++;
        }
        else if (Entered_number<Random_number){
                printf("ENTER A LARGER NUMBER");
                value++;
        }
        else{
            printf("YES THE NUMBER IS CORRECT\nTOTAL NUMBER OF ATTEMPTS ARE:%d",value);
        }
    }
    return 0;
}