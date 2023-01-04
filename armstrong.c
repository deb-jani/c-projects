#include <stdio.h>
#include <math.h>
int armCheck(int num)
{
	int d=0,a=0;
	while(num>=0)
	{
		d=num%10;
		a=a+(pow(d,3));
		num=num/10;
	}
	return a;
}
int main()
{
	int num,temp=0;
	printf("Enter number to be checked: ");
	scanf("%d", &num);
	temp=armCheck(num);
	if(temp==num)
	 printf("The number %d is Armstrong", num);
	else
	 printf("The number %d is Not Armstrong", num); 
	return 0;
}
