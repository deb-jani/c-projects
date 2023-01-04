#include <stdio.h>
int reverse(int num)
{
	int d=0,a=0;
	while(num!=0)
	{
		d=num%10;
		a=(a*10)+d;
		num=num/10;
	}
	return a;
}
int main()
{
	int num,temp=0;
	printf("Enter number to be checked: ");
	scanf("%d", &num);
	temp=reverse(num);
	if(temp==num)
	 printf("The number %d is Palindrome", num);
	else
	 printf("The number %d is Not Palindrome", num); 
	return 0;
}
