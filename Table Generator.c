#include<stdio.h>
#include<math.h>
int main()
{
   int i=1,number;
   int m;
   printf("Enter the number to generate a table: ");
   scanf("%d",&number);
   printf("Enter the level(1-m) to generate the table:");
   scanf("%d",&m);
   while(i<=m)
   {
       printf("%d x %d = %d\n",number,i,number*i);
       i+=1;
   }
   return 0;
}