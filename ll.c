#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*link;
};
struct node*root=NULL;
void append()
{
	struct node*root,*temp,*q;
	q=root;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("enter the node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	while(q->link!=NULL)
	{
		q=q->link;
	}
	q->link=temp;
}
int length()
{
	struct node*root,*temp;
	temp=root;
	int len=0;
	while(temp->link!=NULL)
	{
		len++;
		temp=temp->link;
	}
	return len;
}
void Delete()
{
	struct node*root,*temp,*q;
	temp=root;
	int len,n,i;
	len=length();
	printf("enter the which node is delete:");
	scanf("%d",&n);
	if(n>len)
	{
	printf("invalid node");
		}
	else if(n==1)
	{
		root=temp->link;
		temp->link=NULL;
		free(temp);
		}	
	else
	{
			i=1;
		while(i<n-1)
		{
		temp=temp->link;
		i++;	
		}
		q=temp->link;
		temp->link=q->link;
		q->link=NULL;
		free(q);		
	}
}
void display()
{
	struct node*root,*temp;
	temp=root;
	if(root==NULL)
	{
		printf("linked list is empty..");
	}
	while(temp->link!=NULL)
	{
		
		temp=temp->link;
		printf("%d->",temp->data);
	}
	
}
int main()
{
	int ch;
	printf("1.append\n2.display\n3.delete\n4.exit\n");
	while(1)
	{
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				append();
				break;
			case 2:
				display();
				break;
			case 3:
				Delete();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("your choice is not avialable");
				
		}
}
return 0;
}
