#include<stdio.h>
void main(){
    int f=1,i,n;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        f=f*i;
        
    }
    printf("Factorial of %d = %d",n,f);
}
