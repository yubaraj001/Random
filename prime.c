#include<stdio.h>
void main(){
    int a;
    printf("Input a number to check whether its a prime no. or not");
    scanf("%d",&a);
    if(a==1){
        printf("1 is not a prime no. ");
    }
    else{
        for(int i=2;i<a;i++){
            if(a%i==0){
                printf("The no. %d is not a prime no.", a);
                break;
            }
            else{
                printf("The no. %d is a prime no.", a);
                break;
            }
        }
    }
}