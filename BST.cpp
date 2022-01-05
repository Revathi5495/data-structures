#include<stdio.h>
struct node
{
	int data;
	struct node*left;
	struct node*right;
};
struct node*root=NULL;
void preorderTraversal(struct node *root)
{
if(root != NULL)
{
printf("%d\t", root->data);
preorderTraversal(root->left);
preorderTraversal(root->right);
}
}
void insert()
{
	struct node*temp;
	printf("enter the tree data:");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
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
		if(temp->data>p->data)
		{
			p->right=temp;
		}
		else
		{
			p->left=temp;
		}
	}
}
int main()
{ 
   
    insert();
	preorderTraversal(struct node *root);
}
