#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*left;
	struct node*right;
};
struct node*root=NULL;
int insert(int i)
{
	struct node*temp,*parent;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=i;
	temp->left=NULL;
	temp->right=NULL;
	parent=root; 
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node*current;
		current=root;
		while(current)
		{
			 parent=current;
			if(temp->data>current->data)
			{
			   current=current->right;
			}
			else
			{
				current=current->left;
			}
		}
		if(temp->data>parent->data)
		{
			parent->right=temp;
		}
		else
		{
			parent->left=temp;
		}
	}
	printf("inserted sucessfully");	
}
void displayinorder(struct node*t)
{
	if(t->left)
	{
		displayinorder(t->left);
	}
	printf("%d",t->data);
	if(t->right)
    {
    	displayinorder(t->right);
	}
}
void deleteleaf()
{
	struct node*t;
	priintf("enter the leafnode(which you want to delete):");
	scanf("%d",&t->data);
		struct node*current;
		current=root;
		while(current)
		{
			 parent=current;
			if(t==current->left)
			{
			   current=current->right;
			}
			else
			{
				current=current->left;
			}
		}
	
}
void delete1child()
int main()
{  
    int i,ch; 
    while(1)
    {
    printf("enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
	printf("enter the node for insertion:");
	scanf("%d",i);
	insert(i);
	break;
	case 2:
		deleteleaf();
		break;
	case 3:
		delete1child();
		break;
	case 4:
		delete2child();
		break;
	case 5:
		 struct node*t;
		 t=root;
		displayinorder(strut node*t);
		break;
	case 6:
		printf("you are exit");
		exit(0);
		break;
	default:
		printf("you are entered choice is not avilable...");
}
}
}
