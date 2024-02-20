#include<stdio.h>
int main()
{
      int ang1=0;
      int ang2=0;
      int ang3=0;

      printf("Enter first angle :");
      scanf("%d",&ang1);
      printf("Enter second angle :");
      scanf("%d",&ang2);
      printf("Enter third angle :");
      scanf("%d",&ang3);

      int total=ang1+ang2+ang3;
      printf("total number of triangle :%d\n",total);

      if (total == 180 && ang1!=0 && ang2!=0 && ang3!=0)
      {
        printf("triangle can be formed");
      }
      
      else
      {
      printf("triangle can not be formed");
      }




    return 0;
}