#include<stdio.h>
void main(){
    int S1,S2,S3,t,p;
    printf("Enter marks of the three subjects");
    scanf("%d%d%d",&S1,&S2,&S3);
    t=S1+S2+S3;
    p=t/3;
    if(p>=40 && S1>=33 && S2>=33 && S3>=33){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
}
