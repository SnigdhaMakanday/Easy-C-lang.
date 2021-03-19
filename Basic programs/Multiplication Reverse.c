#include<stdio.h>
void main(){
    int n ,i,z;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=10;i>=1;i--){
        z=n*i;
        printf("%d x %d = %d\n",n,i,z);
    }
}
