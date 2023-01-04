#include <stdio.h>
int main()
{
	int n,x=0;
	printf("Input integer whose factorial is to be found: ");
	scanf("%d", &n);
	factors(n,x);
	return 0;
	
}
void factors(int num,int x)
{
	x=x+1;
	printf("The factors are ");
	if(x<=num)
	{
		if(num%x==0)
		printf("%d",x);
	 factors(num,x);
	}
}
