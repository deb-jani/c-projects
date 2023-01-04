#include <stdio.h>
int binarySearch(int arr[], int start_index, int end_index, int x)
{
	int mid;
    while (start_index <= end_index){
    mid = start_index + (end_index- start_index )/2;
      if (arr[mid] == x)
         return mid;
      if (arr[mid] < x)
        start_index=mid+1;
      else
        end_index=mid-1;
   }
   return -1;
}
int main()
{
	int n,i,x,pos;
    printf("Enter size of array\n");
 	 scanf("%d",&n);
 	int arr[n];
 	printf("Enter %d elements\n",n);
 	 for(i=0;i<n;i++)
 	 scanf("%d",&arr[i]);
 	printf("Enter element to be searched\n");
 	 scanf("%d",&x);
    pos= binarySearch(arr, 0, n-1, x);
    if(pos == -1 ) 
      printf("Element not found in the array ");
   else 
      printf("Element found at index : %d",pos+1);
   return 0;
}
