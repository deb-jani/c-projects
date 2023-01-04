#include<stdio.h>
void amicableCheck(int num1, int num2)
{
    int i,d1=0,d2=0;
    for(i=1;i<num1;i++)
	{
    	if(num1%i==0)
        d1=d1+i;
    }
    for(i=1;i<num2;i++)
	{
        if(num2%i==0)
        d2=d2+i;
    }
    if((num1==d2) && (num2==d1))
     printf("%d and %d are Amicable numbers\n",num1,num2);
    else
     printf("%d and %d are not Amicable numbers\n",num1,num2);
}
int main()
{
    int num1,num2;
    printf("Enter the two numbers to be checked:");
    scanf("%d %d",&num1,&num2);
    amicableCheck(num1, num2);
    return 0; 
}
