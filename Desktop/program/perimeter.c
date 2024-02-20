#include<stdio.h>
#define PI 3.14

int main(){
    float r=0;
    printf("Enter the radiuis :");
    scanf("%f",&r);
    float area= PI*r*r;
    float perimeter= 2*PI*r;
    printf("area of circle :%f\n",area);
    printf("perimeter :%f",perimeter);
    

    return 0;
    
}