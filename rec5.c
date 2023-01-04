#include <stdio.h>
int main()
{
	int n,x=1;
	printf("Input integer whose factorial is to be found: ");
	scanf("%d", &n);
	fact(n,x);
	return 0;
	
}
void fact(int num,int x)
{
	x=x*num;
	num=num-1;
	if(num>=1)
	{
	fact(num,x);
	}
	else 
	printf("The sum is %d",x);
}
