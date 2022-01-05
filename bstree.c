#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;
};
struct node*root=NULL;
void insert()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data:");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	if(temp->data==-1)
	{
		exit(0);
	}
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node*cur,*p;
		cur=root;
		while(cur!=NULL)
		{
			p=cur;
			if(temp->data>=cur->data)
			{
				cur=cur->right;
			}
			else
			{
				cur=cur->left;
			}
		}
		if(temp->data<p->data)
		{
			p->left=temp;
		}
		else
	    {
			p->right=temp;
		}
	}
}
void preorder(struct node*root)
{
	if(root!=NULL)
	{
		printf("%d\n",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
int main()
{
	int ch;
	printf("the tree opertions are:");
	printf("\n1.insert\n2.display\n3.exit\n");
	while(1)
	{
	printf("\nenter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			insert();
			break;
		case 2:
			preorder(root);
			break;
	    case 3:
			exit(0);
			break;
		default:
			printf("\nyour choice is unavailable\n");
			break;
	}
}
}
