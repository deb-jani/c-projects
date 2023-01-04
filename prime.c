#include <stdio.h>
int check(int num)
{
	int i,c=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		c++;
	}
	return c;
}
int main()
{
	int num,temp=0;
	printf("Enter number to be checked: ");
	scanf("%d", &num);
	temp=check(num);
	if(temp==2)
	 printf("The number %d is Prime", num);
	else
	 printf("The number %d is Not Prime", num); 
	return 0;
}

