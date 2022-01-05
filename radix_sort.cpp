#include<stdio.h>
int count_sort(int a[],int n,int pos)
{
	int i,count[10]={0},b[n];
	for(i=0;i<n;i++)
	{
		++(count[(a[i]/pos)%10]);
	}
	for(i=1;i<=9;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=n-1;i>0;i++)
	{
		b[--count[(a[i]/pos)%10]]=a[i];
	}
	printf("sorted array is:");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);	
	}
}
int radix_sort(int a[],int max,int n)
{
	int pos;
	for(pos=1;max/pos>0;pos*10)
	{
		count_sort(a,n,pos);
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
    radix_sort(a,max,n);
	    return 0;
}

