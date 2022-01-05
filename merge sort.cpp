#include<stdio.h>
#define MAX 50

 int MERGE(int a[],int lb,int ub,int mid)
{
	int b[MAX],i,j,k=lb;
	i=lb;j=mid+1;
	while(i<=mid&&j<=ub)
	{
	if(a[i]<a[j])
	{
		b[k]=a[i];
     	i++;
     	k++;
	}
	else
	{
		b[k]=a[j];
		j++;
	    k++;
    }
}
	while(j<=ub)
		{
			b[k]=a[j];
	       j++; k++;
		}
	while(i<=mid)
		{
			b[k]=a[i];
			i++;
		    k++;
		}
    for(i=0;i<k;i++)
	{
		a[i]=b[i];
	}
}
 int merge(int a[],int lb,int ub)
{
int mid;	
	if(lb<ub)
	{
	mid=(lb+ub)/2;
	merge(a,lb,mid);
	merge(a,mid+1,ub);
	MERGE(a,lb,ub,mid);
}
}
int main()
{
	int a[MAX],i,n;
	printf("enter the length of array:");
	scanf("%d",&n);
	printf("enter elements into the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge(a,0,n-1);
    printf("sorted array is ");
    for(i=0;i<n;i++)
	{
	 printf("%d",a[i]);
	}
	return 0;
}
