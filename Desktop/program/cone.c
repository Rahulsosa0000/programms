#include<stdio.h>
#define PI 3.14
#define a 0.33
int main(){
 
             float r=0;
             float h=0;
             printf("enter the radius :");
             scanf("%f",&r);
             printf("enter the hieght :");
             scanf("%f",&h);
             
            float volume=a*PI*r*r*h;
            printf("volume of cone :%f",volume);
            



    return 0;
}