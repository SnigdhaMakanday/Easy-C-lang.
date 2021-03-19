---------------------------------FOR LOOP-----------------------------------------
#include<stdio.h>
void main(){
    int n ,i,s=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i;
    }
    printf("Sum = %d",s);
}


--------------------------------WHILE LOOP------------------------------------------
#include<stdio.h>
void main(){
    int i = 1,n, s=0;
    printf("Enter the no. till where you need Sum");
    scanf("%d",&n);
    while(i<=n){
        s=s+i;
        i++;
    }
    printf("Sum is = %d",s);
}


-------------------------Do - WHILE LOOP--------------------------------------------
 #include<stdio.h>
void main(){
    int i = 1,n, s=0;
    printf("Enter the no. till where you need Sum");
    scanf("%d",&n);
    do{
        
        s=s+i;
        i++;
    }while(i<=n);
    printf("Sum is = %d",s);
}

