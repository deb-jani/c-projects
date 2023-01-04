#include <stdio.h>
#include <math.h>
void armCheck(int num)
{
	int d=0,a=0,n;
	n=num;
	while(n>0)
	{
		d=n%10;
		a=a+(pow(d,3));
		n=n/10;
	}
	if(a==num)
	 printf("The number %d is Armstrong", num);
	else
	 printf("The number %d is Not Armstrong", num); 
}
int main()
{
	int num,temp=0;
	printf("Enter number to be checked: ");
	scanf("%d", &num);
	armCheck(num);
	return 0;
}
