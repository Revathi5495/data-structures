#include<stdio.h>
int main()
{
	int arr[20],i,j,n,temp;
	printf("define the length of the array:");
	scanf("%d",&n);
	printf("enter the elements into the array:\n");
	for(i=0;i<n;i++)
	{
		printf("array[%d]=",i);
		scanf("%d",&arr[i]);
	}
  //selection sorting
	for(i=0;i<n-1;i++)
	{ 
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}	
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		
	}
	//displaying sorted array
    printf("sorted array is\n");
   	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	return 0;
}

