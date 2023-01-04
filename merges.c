#include <stdio.h>
#define MAX 8
int i=1;
void printPass (int arr[])
{
	int a;
	printf("%d Pass : ",i++);
	for( a=0;a<MAX;a++)
		printf("%d\t",arr[a]);
	printf("\n");
}
void merge(int arr[], int p, int q, int r) 
{ 
  int i,j,k;
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for ( i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for ( j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  i = 0;
  j = 0;
  k = p;

  
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}
/*void merge(int arr[], int l, int m, int r)
{
	int i=0, j=0, k=l;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	for (int ii = 0; ii < n1; ii++)
		L[ii] = arr[l + ii];
	for (int jj = 0; jj < n2; jj++)
		R[jj] = arr[m + 1 + jj];
	while (i < n1 && j < n2)
		(L[i] <= R[j])?arr[k++] = L[i++] : arr[k++] = R[j++];
	while (i < n1)
		arr[k++] = L[i++];
	while (j < n2)
		arr[k++] = R[j++];
}*/
void mergeSort(int arr[], int l, int r)
{
	int i=1;
	if (l < r)
	{
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
		printPass(arr);
	}
}
void printResult (int arr[])
{
	int i;
	printf("The elements are :\n");
	for ( i=0;i<MAX;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
int main()
{
	int i;
	int arr[MAX];
	printf("Enter %d elements :\n",MAX);
	for ( i=0;i<MAX;i++)
		scanf("%d",&arr[i]);
	mergeSort(arr, 0, MAX-1);
	printResult(arr);
	return 0;
}
