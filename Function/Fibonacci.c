#include<stdio.h>
int Fib(int n);
void main(){
    int n,F,i;
    printf("Enter how many numbers you want to see of fibonacci series");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        F=Fib(i);
       printf("%d\t",F);
    }
}
int Fib(int x){
    int f;
    if(x==1 || x==2){
        return 1;
    }
    return (Fib(x-1)+ Fib(x-2));
     
}
