#include <stdio.h>     
#include <math.h>
void disarmCheck(int num)
{    
    int d=0,sum=0,rem=0,n,c=0;   
	n=num; 
    while(n!= 0)
	{    
        d=d+1;    
        n=n/10;    
    }        
    while(n>0)
	{    
        rem=n%10;   
		c= (int)pow(rem,d);
        sum=sum+c;    
        n=n/10;    
        d--;    
    }    
    if(sum==num)    
     printf("%d is a disarium number", num);    
    else    
     printf("%d is not a disarium number", num);    
}         
int main()    
{    
    int num;    
	printf("Enter number to be checked: ");
	scanf("%d", &num);
	disarmCheck(num);
    return 0;    
}    
