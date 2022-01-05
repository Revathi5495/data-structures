#include<stdio.h>
int quicksort(int a[],int lb,int ub)
{
  int pivot=lb;
  int start=lb;
  int end=ub;
  int temp,i;
 while(start<end)
   {
	while(a[start]<=a[pivot]&&start<ub)
	{
		start++;
	}
	while(a[end]>a[pivot]&&end>lb)
	{
		end--;
	}
   if(start<end)
   {
   temp=a[start];
   a[start]=a[end];
   a[end]=temp;
  }
}
   	 temp=a[end];
   	 a[end]=a[pivot];
   	 a[pivot]=temp;
   	    quicksort(a,lb,ub);
		quicksort(a,lb,end-1);
		quicksort(a,end+1,ub);
}
int main()
{
	int a[50],i,n;
	printf("enter the length of array:");
	scanf("%d",&n);
	printf("enter elements into the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	quicksort(a,0,n-1);
     printf("sorted array is ");
    for(i=0;i<n;i++)
	{
	 printf("%d ",a[i]);
	}
	return 0;
} 
