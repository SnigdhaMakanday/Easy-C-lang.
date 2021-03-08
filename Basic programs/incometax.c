#include<stdio.h>
void main(){
    int income;
    float tax=0;
    printf("Enter the income");
    scanf("%d",&income);
    if(income< 250000){
        printf("No tax");
    }
    if(income>=250000 && income<500000){
        tax = tax + 0.05*(income-250000);
        printf("tax to be paid is : %f",tax);
    }
    if(income>=500000 && income<1000000){
        tax = tax + 0.20*(income-500000);
        printf("tax to be paid is : %f",tax);
    }
    if(income>=1000000){
        tax = tax + 0.30*(income-1000000);
        printf("tax to be paid is: %f",tax);
    }
}
