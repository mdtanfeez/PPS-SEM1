#include<stdio.h>
int sum(int n)
{
if(n==0)
return 0;
return n +sum(n-1);

}
int main()
{
int n,result;
printf("emter number");
scanf("%d",&n);
result=sum(n);
printf("Sum of %d natural numbers is%d",n,result);
return 0;
}
