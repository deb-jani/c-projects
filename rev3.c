#include <stdio.h>
int main()
{
	int x=100,s=0;
	add(x,s);
	return 0;
	
}
void add(int v,int p)
{
	p=p+v;
	v=v+2;
	if(v<=999)
	add(v,p);
	else 
	printf("The sum is %d",p);
}
