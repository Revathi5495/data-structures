#include<stdio.h>
int main()
{
	int arr[20],i,j,n,temp,k,first,last,mid,key,count=0,m;
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
		while(arr[j]>temp&j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	//displaying sorted array
    printf("sorted array is\n");
   	for(i=0;i<n;i++)
	{
		printf("array[%d]=%d\n",i,arr[i]);
	}
    printf("please enter the element which is you want to search:");
	scanf("%d",&key);
first=0;
last=n-1;
mid=(first+last)/2;
while(first<=last)
{
	if(key==arr[mid])
	{
		printf("%d is found ..",key);
		count=count+1;
	}
	else if(key>arr[mid])
	{
		first=mid+1;
	}
	else if(key<arr[mid])
	{
		last=mid-1;
	}
	mid=(first+last)/2;
printf("\nelement was not found");
}
}
