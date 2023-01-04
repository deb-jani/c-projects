#include<stdio.h>
void krishCheck(int num)
{
	int n,i,sum=0,fact,d=0;\
	n=num;
	while(n!=0)
	{
		d=n%10;
		fact=1;
		for(i=1;i<=d;i++)
		{
		    fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;	
	}
	if(sum == num)
     printf("%d is Krishnamurthy Number",num);
	else
	 printf("%d is not a Krishnamurthy Number",num);
}
int main()
{
    int num;
    printf("Enter the number to be checked:");
    scanf("%d",&num);
    krishCheck(num);
    return 0; 
}
