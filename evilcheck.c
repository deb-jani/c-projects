#include<stdio.h>
void evilCheck(int num)
{
	int c=0,n;
	n=num;
    while(num!=0)
    {
       if(num%2==1)
       {
       	c++;
	   }
       num=num/2;
	}
    if(c%2==0)
     printf("%d is an Evil Number",n);
    else
     printf("%d is not an Evil Number",n);
}
int main()
{
    int num;
    printf("Enter the number to be checked:");
    scanf("%d",&num);
    evilCheck(num);
    return 0; 
}
