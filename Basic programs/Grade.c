#include<stdio.h>
void main(){
    int M;
    printf("Enter total marks of Student");
    scanf("%d", &M);
    if((100>=M) && (M>90)){
        printf("Grade = A ");
    }
    else{
        if((90>=M) && (M>80)){
         printf("Grade = B");
        }
        else{
            if((80>=M) && (M>70)){
                printf("Grade = C");
            }
            else{
                if((70>=M) && (M>60)){
                     printf("Grade = D");
                }
                else{
                    if(M<=60){
                         printf("Fail");
                    }
            }   }
        }
    }
}
