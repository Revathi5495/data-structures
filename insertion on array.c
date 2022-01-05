#include<stdio.h>
int main()
{
	int a[50],n,i,k,p;
	printf("enter the size of array:");
	scanf("%d",&n);
	if(n>50)
	{
		printf("the array size is limited to 50 in this program\n");
	}
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	printf("if you want to add any element to array\n then enter the position:");
	scanf("%d",&p);
	printf("new element:");
	scanf("%d",&k);
	if(p>n)
	{
		printf("\ninvalid position");
	}
	else if(p==n)
	{
		a[n]=a[n-1];
		a[n-1]=k;
		
	}
	else
	{
		for(i=n-1;i>=p-1;i--)
		    a[i+1]=a[i];
       a[p-1]=k;
       
}
printf("updated array:");
for(i=0;i<=n;i++)
{
	printf("\na[%d]=%d",i,a[i]);
}
}
