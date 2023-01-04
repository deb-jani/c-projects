#include <stdio.h>
#include <stdlib.h>
int linearSearch(int arr[],int num, int x)
{
int pos = -1,i;
for ( i = 0; i < num;i++)
{
    if (arr[i]==x) {
    pos = i;
    break;
    }
}
return pos;
}
int main()
 {
 	int n,i,x,d,pos;
 	printf("Enter size of array\n");
 	 scanf("%d",&n);
 	int arr[n];
 	printf("Enter %d elements\n",n);
 	 for(i=0;i<n;i++)
 	 scanf("%d",&arr[i]);
 	printf("Enter element to be searched\n");
 	 scanf("%d",&x);
	d= sizeof(arr) / sizeof(arr[0]);
	pos = linearSearch(arr,d,x);
if (pos != 1)
    printf("Element found at position : %d \n", pos+1);
else
    printf("Element not found \n");
return 0;
}
