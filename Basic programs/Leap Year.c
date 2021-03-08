#include<stdio.h>
void main(){
    int yr;
    printf("Enter the year");
    scanf("%d",&yr);
    if(yr%4 == 0){
        if(yr%100 == 0){
            if(yr%400 == 0){
                printf("Leap Year");
            }
            else{
                printf("Not Leap Year");
            }
        }
        else{
            printf("Not a Leap Year");
        }
    }
    else{
        printf("Not a Leap Year");
    }
}
