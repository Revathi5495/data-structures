#include<stdio.h>
#include<stdlib.h>
int swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int maxheapify(int a[],int n,int i)
{
	int largest=i;
	int l=2*i;
	int r=(2*i)+1;
	while(l<=n&&a[l]>a[largest])
	{
		largest=l;
	}
	while(r<=n&&a[r]>a[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		swap(a[largest],a[i]);
		maxheapify(a,n,largest);
	}
}
int heapsort(int a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
	{
		maxheapify(a,n,i);
	}
	for(i=n;i>=1;i--)
	{
		swap(a[1],a[i]);
		maxheapify(a,n,i);
	}
}
int main()
{
int a[10],n,i;
	printf("enter the length of the array:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);	
	}
	heapsort(a,n);
	return 0;
}
