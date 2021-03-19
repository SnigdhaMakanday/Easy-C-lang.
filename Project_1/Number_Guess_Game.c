#include<stdio.h>
#include<stdlib.h> //This is for the usage of rand() function 
#include<time.h>
void main(){
    int num,guess,nguess=1;
    srand(time(0)); // to make the function generate different number at different time
    num=rand()%100+1; // Generates random number between 1 to 100 
    //printf("The number is = %d\n",num);
    do{
       printf("Guess the number between 1 to 100\n");
       scanf("%d",&guess);
       if(guess>num){
           printf("Lower number please\n");
       }
       else{
           if(guess<num){
               printf("Higher number please\n");
           }
           else{
               printf("You guessed in %d attempts\n",nguess);
           }
       }
       nguess++;
    }while(guess!=num);
    
    
}
