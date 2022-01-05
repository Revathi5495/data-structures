#include<stdio.h>
int count_sort(int a[],int n,int max)
{
	int i,count[max+1]={0},b[n];
	for(i=0;i<n;i++)
	{
		++(count[a[i]]);
	}
	for(i=1;i<=max;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=n-1;i>0;i++)
	{
		b[--count[a[i]]]=a[i];
	}
	printf("sorted array is:");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);	
	}
}
int main()
{
	int a[50],i,n,max;
	printf("enter the length of array:");
	scanf("%d",&n);
	printf("enter elements into the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
     max=a[0];
     for(i=0;i<n;i++)
     {
     	if(max<a[i])
     	{
     		max=a[i];
		 }
	 }
    count_sort(a,n,max);
	    return 0;
}

