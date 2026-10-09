#include<stdio.h>
void main()
{
 int i,j,n;
 printf("enter no. of rows");
 scanf("%d",&n);

 printf("square pattern of size%d is \n",n);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=n;j++)
     {
         printf("*");
     }

         printf("\n");

 }
}
