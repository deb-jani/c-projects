#include <stdio.h>
#include <math.h>
void kapCheck(int num)
{
	int d,c=0,n,a=0,f1=0,f2=0;
	n=num;
	d=num*num;
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	a=(pow(10,c));
	f1=(int)(d/a);
	f2=(int)(d%a);
	if((f1+f2)==num)
	 printf("The number %d is Kaprekar", num);
	else
	 printf("The number %d is Not Kaprekar", num); 
}
int main()
{
	int num,temp=0;
	printf("Enter number to be checked: ");
	scanf("%d", &num);
	kapCheck(num);
	return 0;
}
