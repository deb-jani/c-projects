#include <stdio.h>
void smithCheck(int num)
{	int i,sum=0,s=0,x,j;
	x=num;
	while(x>0)
	{	sum=sum+(x%10);
		x=x/10; }
	for(i=2;i<=num;i++)
	{	if(num%i==0)
		{	int c=0,v=i;
			for(j=1;j<=i;j++)
			{   if(i%j==0)
				c++; }		
			if(c==2)
			{	while(i>0)
				{	s=s+(v%10);
					v=v/10;  }
			num=num/i;
			i=1;   }}
	}
	if(s==sum)
	 printf("The number %d is Smith", s);
	else
	 printf("The number %d is Not Smith", s);
}
int main()
{
	int num,temp=0;
	printf("Enter number to be checked: ");
	scanf("%d", &num);
	smithCheck(num);
	return 0;
}

