#include <stdio.h>
#define MAX 8
int partition(int arr[], int high, int low);
int i=1;
void printPass (int arr[])
{
	int a;
	printf("%d Pass : ",i++);
	for ( a=0;a<MAX;a++)
		printf("%d\t",arr[a]);
	printf("\n");
}
void swap (int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void printResult (int arr[])
{
	int i;
	printf("The elements are :\n");
	for ( i=0;i<MAX;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
void quickSort(int array[], int low, int high)
{
	if (low < high)
	{
		int pivot = partition(array, low, high);
		quickSort(array, low, pivot - 1);
		quickSort(array, pivot + 1, high);
	}
}
int partition(int array[], int low, int high)
{
	int i,j,pivot;
	 pivot = array[high];
	 i = (low - 1);
	for ( j = low; j < high; j++)
		if (array[j] <= pivot)
			swap(array+(++i), array+j);
	printPass(array);
	swap(array+i+1, array+high);
	return (i+1);
}
int main()
{
	int arr[MAX], i;
	printf("Enter %d elements :\n",MAX);
	for ( i=0;i<MAX;i++)
		scanf("%d",&arr[i]);
	quickSort(arr, 0, MAX-1);
	printResult(arr);
	return 0;
}
