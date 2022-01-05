#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int stack[CAPACITY],top=-1;
void push(int ele)
{
	if(top==CAPACITY-1)
	printf("stack is overflow..\n");
	else
	top++;
	stack[top]=ele;
}
void pop()
{
	if(top==-1)
	printf("stact is undeflow..\n");
	else
	top--;
}
void peek()
{
	if(top==-1)
	printf("stack have no elements..\n");
	else
	printf("stack[%d]=%d\n",top,stack[top]);
}
void traverse()
{
	int i;
	if(top==-1)
	printf("stack have no elements..\n");
	else
	for(i=top;i>=0;i--)
	printf("stack[%d]=%d\n",i,stack[i]);
}
void size()
{
	int i=0,count=0;
	while(i!=top)
	{
	i++;
	count=count+1;
}
	printf("size of the stack is %d\n",count+1);
}
int main()
{
	int ch,ele;
	printf("\t\t======STACK OPERATIONS======");
	printf("\n1.Push\n2.Pop\n3.Peek\n4.Traverse\n5.Size\n6.Quit\n");
	while(1)
	{
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter element:");
				scanf("%d",&ele);
				push(ele);
				break;
			case 2:
				pop();
			   	break;
			case 3:
				peek();
			    break;
			case 4:
				traverse();
			    break;
			case 5:
				size();
			    break;
			case 6:
				exit(0);
				break;
			default:
				printf("invalid response....\n");
		}
	}
	return 0;
}
