#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*left;
	struct node*right;
};
struct node *root=NULL;
void append()
{
	struct node*temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter node data:");
	scanf("%d",&temp->data);
	temp->right=NULL;
	temp->left=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	while(p->right!=NULL)
	{
		p=p->right;
	}
	p->right=temp;
	temp->left=p;
}
int length()
{   int count=0;
	struct node *p;
	p=root;
	while(p!=NULL)
	{
		count++;
		p=p->right;
	}
	return count;
}
void addatbegin()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data:");
	scanf("%d",&temp->data);
	temp->right=temp->left=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	temp->right=root;
	root->left=temp;
	root=temp;
}
int addafter()
{
	int loc,i=1;
	struct node *temp,*p=root;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data:");
	scanf("%d",&temp->data);
	temp->right=temp->left=NULL;
	printf("enter the location:");
	scanf("%d",&loc);
	if(loc>length())
	{
		printf("INVALID location\n");
	}
	else
	{
	while(i<loc)
	{
		p=p->right;
		i++;
	}
	temp->right=p->right;
	p->right->left=temp;
	temp->left=p;
	p->right=temp;
	}
}
void Delete()
{
	int loc,i=1;
	struct node*p=root,*q;
	printf("enter location:");
	scanf("%d",&loc);
	if(loc>length())
	{
	printf("INVALID location\n");	
	}
	else if(loc==1)
	{
	root->left=NULL;
	root=p->right;
	free(p); 	
	}
	else if(loc==length())
	{
		while(p->right!=NULL)
		{
		  p=p->right;	
		}
		p->left->right=NULL;
		p->left=NULL;
		free(p);
	}
	else
	while(i<loc-1)
	{
		p=p->right;
		i++;
	}
	q=p->right;
	p->right=q->right;
	q->right->left=p;
	free(q);
}
void display()
{
	struct node*p=root;
	if(root==NULL)
	{
		printf("no nodes to display..\n");
	}
	else
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->right;
	}	
}
int main()
{
	int ch,k;
	printf("double linked list operatations...");
	printf("\n1.append\n2.add at begin\n3.add after\n4.display\n5.delete\n6.reverse\n7.length\n8.quit\n");
	while(1)
	{
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				append();
				break;
			case 2:
				addatbegin();
				break;
			case 3:
				addafter();
				break;
			case 4:
				display();
				break;
			case 5:
				Delete();
				break;
			
			case 7:
				k=length();
				printf("%d\n",k);
				break;
			case 8:
				exit(1);
				break;
			default:
				printf("enter another choice..");
				
		}
	}
}
