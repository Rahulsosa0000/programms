#include<stdio.h>
int main(){

    int cp;
    int sp;
    int amount;
     printf("Enter the selling price :");
     scanf("%d",&sp);
     printf("Enter the cost price :");
     scanf("%d",&cp);

     if (sp>cp)
     {
        int amount=sp-cp;
        printf("profit = %d",amount);
     }
     else if(cp>sp)
     {
        int amount=cp-sp;
         printf("profit = %d",amount);
     }
     else{
         printf("no profit");
     }
     

    return 0;
}