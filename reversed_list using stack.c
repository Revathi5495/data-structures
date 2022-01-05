#include<stdio.h>
int stack[10],top=-1;
int push(int ele)
{
	top++;
	stack[top]=ele;
}
int pop()
{
	return stack[top--];
}
int main()
{
	int i,n,b[10],val;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements into the list:\n");
	for(i=0;i<n;i++)
	{
      scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		push(b[i]);
	}
	for(i=0;i<n;i++)
	{
		val=pop();
		b[i]=val;
	}
	printf("reversed list is ");
	for(i=0;i<n;i++)
	{
	   printf("%d ",b[i]);
	}
}
