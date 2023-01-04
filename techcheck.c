#include <stdio.h>
#include <math.h>
void techCheck(int num)
{
	int n,d=0,c=0,a1=0,a2=0,sum=0;    
    n=num;  
	while(n>0)  
	{   d++;  
		n=n/10;  
	}	  
	if(d%2==0)  
	{	n=num;  
		c=(pow(10,d/2));
		a1=(int)(n/c);
		a2=(int)(n%c);
		sum=(a1+a2)*(a1+a2);  
		if(num==sum)  
		 printf("The number %d is Tech", num);   
		else  
		printf("The number %d is Not Tech", num);    
	}  
	else   
	{
		printf("The number %d is Not Tech", num); 
	}
}
int main()
{
	int num,temp=0;
	printf("Enter number to be checked: ");
	scanf("%d", &num);
	techCheck(num);
	return 0;
}
