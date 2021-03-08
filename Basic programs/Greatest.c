#include<stdio.h>
void main(){
    int n1,n2,n3,n4;
    printf("Enter four no.s ");
    scanf("%d%d%d%d",&n1 , &n2, &n3,&n4);
    if(n1>n2){
        if(n1>n3){
            if(n1>n4){
                printf("%d is greatest",n1);
            }
            else{
                printf("%d is greatest",n4);
            }
        }
        else{
            if(n3>n4){
                printf("%d is greatest",n3);
            }
            else{
                printf("%d is greatest",n4);
            }
        }
    }
    else{
        if(n2>n3){
            if(n2>n4){
                printf("%d is greatest",n2);
            }
            else{
                printf("%d is greatest",n4);
            }
        }
        else{
            if(n3>n4){
                printf("%d is greatest",n3);
            }
            else{
                printf("%d is greatest",n4);
            }
        }
    }
}
