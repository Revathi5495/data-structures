#include"stdio.h"
#include"stdlib.h"
struct node
{
	int data;
	struct node *link;
};
struct node*root=NULL,*temp,*x,*y;
int append()
{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
		temp->link=root;
	}
	else
	while(x->link!=root)
	{
		x=x->link;
	}
	x->link=temp;
	temp->link=root;
}
int addatbegin()
{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	while(x->link!=root)
	{
		x=x->link;
	}
	temp->link=root;
	x->link=temp;
	root=temp;
}
int length()
{
	int count=0;
	while(temp->link!=root)
	{
		count++;
		temp=temp->link;
	}
	return count++;
}
int addafter()
{
	int i=1;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	int loc;
	printf("enter location:");
	scanf("%d",&loc);
	if(loc>length())
	{
		printf("invalid location");
	}
	else
	while(i<loc)
	{
		x=x->link;
		i++;
	}
	temp->link=x->link;
	x->link=temp;
}
int deletion()
{
	int loc,i;
	struct node *p,*q;
	printf("enter location:");
	scanf("%d",&loc);
	if(loc>length())
	{
		printf("invalid location..");
	}
	else if(loc==1)
	{   
	    	temp=root;
		while(x->link!=root)
		{
			x=x->link;
		}
		root=temp->link;
	    temp->link=NULL;
		x->link=root;
		free(temp);
	}
	else
	{
		while(i<length()-1)
		{
			y=y->link;
			i++;
		}
     	q=y->link;
     	y->link=q->link;
     	q->link=NULL;	
	}
	
}
int reverse()
{
	int i=1,j=length();
	x=y=root;
	while(i<j)
	{
	    int	k=1;
		while(k<j)
		{
			y=y->link;
			k++;
		}
		temp=x->link;
		x->link=y->link;
		y->link=temp;
		i++;j--;	
	    x=x->link;
		y=root;	
	}
}
int display()
{ 
    if(root==NULL)
    {
    	printf("NO nodes to display\n");
	}
	else
    while(temp->link!=root)
    {
    	printf("%d",temp->data);
    	temp=temp->link;
	}
	  printf("%d",temp->data);	
}
int main()
{   
    int ch;
		printf("circular linked list operations\n");
		printf("\n1.APPEND\n2.ADD AT BEGIN\n3.LENGTH\n4.ADD AFTER\n5.DELETE\n6.REVERSE\n7.DISPLAY\n8.quit\n");
     while(1)
	{
	printf("\nchoose your choice:");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				append();
				break;
	     	case 2:
				addatbegin();
				break;
			case 4:
				addafter();
				break;
			case 3:
				length();
				break;
			case 5:
				deletion();
				break;
			case 6:
		        reverse();
		        break;
			case 7:
				display();
				break;
			case 8:
			    exit(1);
				break;
			 default:
				printf("your option not avilable in this \n please enter another choice...");
										        
    	}
	}
}
