#include<stdio.h>
void main(){
    int i,n;
    printf("Enter the no. till where you want to print natural numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",i);
        printf("\n");
    }
}
