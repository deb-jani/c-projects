#include <stdio.h>
#include <math.h>
void autoCheck(int num)
{
	int d=0,c=0,n,a=0,f=0;
	n=num;
	d=num*num;
	while(n>0)
	{
		c++;
		n=n/10;
	}
    a=(pow(10,c));
    f=(int)(d%a);
	if(f==num)
	 printf("The number %d is Automorphic", num);
	else
	 printf("The number %d is Not Automorphic", num); 
}
int main()
{
	int num,temp=0;
	printf("Enter number to be checked: ");
	scanf("%d", &num);
	autoCheck(num);
	return 0;
}
