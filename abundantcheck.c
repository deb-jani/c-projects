#include <stdio.h>
#include <math.h>
void abundantCheck(int num)
{
   int n,i,sum = 0;
   n=sqrt(num);
   for (i=1;i<=n;i++)
   {
      if (num%i==0)
	  {
        if (num/i == i)
        sum = sum + i;
        {
           sum=sum+i;
           sum=sum+(num/i);
        }
      }
   }
   sum=sum-num;
   if(sum>num)
	printf("%d is an abundant number",num);
   else
	printf("%d is not an abundant number",num);
   return 0;
}
int main()
{
    int num;
    printf("Enter the number to be checked:");
    scanf("%d",&num);
    abundantCheck(num);
    return 0; 
}
