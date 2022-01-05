#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*root=NULL;
struct node*base=NULL;
int push()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("enter your element:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		base=root=temp;
	}
	else
	{
		root->link=temp;
	root=temp;
		
	}
}
int pop()
{
	struct node *temp,*p;
	temp=root;
	p=base;
	 if(root==NULL)
	{
		printf("stack is empty");
	}
	else
	{
		while(p->link!=root)
		{
			p=p->link;
		}
		root=p;
		p->link=NULL;
		free(temp);
	}
}
int peek()
{
	struct node *temp;
	temp=root;
	printf("%d",temp->data);
}
int traverse()
{
	struct node *temp;
	temp=base;
	while(temp->link!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
	printf("%d",temp->data);
}
int size()
{
	struct node *temp;
	temp=base;
	int i;
	while(temp->link!=NULL)
	{
		temp=temp->link;
		i++;		
	}
   printf("%d",i+1); 
}
int main()
{
	int ch,ele;
	printf("\t\t======STACK OPERATIONS======");
	printf("\n1.Push\n2.Pop\n3.Peek\n4.Traverse\n5.Size\n6.Quit\n");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
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
