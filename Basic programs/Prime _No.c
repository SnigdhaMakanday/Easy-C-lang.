#include<stdio.h>
void main(){
    int f=0,i,n;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0 ){
            f=1;
            break;
        }
        
    }
    if(f==1 && n!=2){
        printf("Not Prime");
    }
    else{
        printf("Prime No.");
    }
    
}
