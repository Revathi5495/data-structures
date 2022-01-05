#include<stdio.h>
int main()
{
	int a[50],n,i,p;
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
	if(p>n)
	{
		printf("\ninvalid position");
	}
	else
	{
		for(i=p-1;i<n;i++)
		    a[i]=a[i+1];      
}
printf("updated array:");
for(i=0;i<n-1;i++)
{
	printf("\na[%d]=%d",i,a[i]);
}
}
