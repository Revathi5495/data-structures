#include<stdio.h>
int main()
{
	int arr[20],i,j,n,temp,k;
	printf("define the length of the array:");
	scanf("%d",&n);
	printf("enter the elements into the array:\n");
	for(i=0;i<n;i++)
	{
		printf("array[%d]=",i);
		scanf("%d",&arr[i]);
	}
	//insertion sorting
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1; 
		while(arr[j]>temp&&j>=0)
		{
			arr[j+1]=arr[j];
		
		}
		arr[j+1]=temp;
	}
	//displaying sorted array
    printf("sorted array is\n");
   	for(i=0;i<n;i++)
	{
		printf("array[%d]=%d\n",i,arr[i]);
	}
	return 0;
 }

