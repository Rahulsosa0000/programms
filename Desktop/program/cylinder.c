#include<stdio.h>
#define PI 3.14
int main ()
{

   float r=0;
   float h=0;
   printf("enter the radius :");
   scanf("%f",&r);
   printf("enter the hieght :");
   scanf("%f",&h);
   
   float volume=PI*r*r*h;
   printf("volume of cylinder :%f",volume);


return 0;

}
