#include<stdio.h>
void printpattern(int n);
void main(){
    int n;
    printf("Enter the value of number");
    scanf("%d",&n);
    printpattern(n);
    
}
void printpattern(int n){
    int i;
    if(n==1){
        printf("*\n");
    }
    printpattern(n);
    for(i=0;i<=(2*n-1);i++){
        printf("*\n");
    }
  printf("\n");
}
