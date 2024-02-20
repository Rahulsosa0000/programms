#include<stdio.h>
int main(){
    int n=0;
    printf("Enter the number :");
    scanf("%d",&n);

    if(n % 11==0   )
    printf(" %d number is divisible by  11",n);
    else if(n % 5==0){
        printf(" %d number is divisible by 5 ",n);
    }
    else{
        printf("number is not divisible by 5 or 11");
    }
        return 0;

}