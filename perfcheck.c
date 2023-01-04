#include <stdio.h>
void perfCheck(int num)
{
	int i,d=0;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		d=d+i;
	}
	if(d==num)
	 printf("The number %d is Perfect", num);
	else
	 printf("The number %d is Not Perfect", num); 
}
int main()
{
	int num,temp=0;
	printf("Enter number to be checked: ");
	scanf("%d", &num);
	perfCheck(num);
	return 0;
}
