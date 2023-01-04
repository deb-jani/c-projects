#include <stdio.h>
#include <math.h>
void spyCheck(int num)
{
	int d=0,s=0,c=1,x;
	x=num;
	while(num>0)
	{
		d=num%10;
		s=s+d;
		c=c*d;
		num=num/10;
	}
	if(s==c)
	 printf("The number %d is Spy", x);
	else
	 printf("The number %d is Not Spy", x); 
}
int main()
{
	int num,temp=0;
	printf("Enter number to be checked: ");
	scanf("%d", &num);
	spyCheck(num);
	return 0;
}

