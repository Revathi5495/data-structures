#include<stdio.h>
int main()
{
	int a[50],n,i,key,count=0;
	printf("enter the size of list:");
	scanf("%d",&n);
	printf("enter elements into the list:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("please enter the element which is you want to search:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			printf("you entered elment is found at index of %d\n",i);
			count=count+1;
		}
	}
	if(count==0)
	{
		printf("elemnt is not found..");
	}
	return 0;
}
