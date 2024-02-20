#include<stdio.h>
int main(){
    int age=0;
    printf("Enter your Age :");
    scanf("%d",&age);

    if(age>=18 && age<=100){
    printf("eligible for vote");
    }
    else {
        printf("not eligible for vote");
    }
    return 0;
}