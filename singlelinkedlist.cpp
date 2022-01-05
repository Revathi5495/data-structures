#include"stdio.h"
#include"stdlib.h"
int length();
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
int inatbe()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter your node data:");
	scanf("%d",&temp->data);
	temp->link=root;
	root=temp;
}
int insert()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter your node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;	
	int loc,len,i=1;
	printf("enter insert location:");
	scanf("%d",&loc);
	len=length();
	if(loc>len)
	{
		printf("invalid location\npresent list have %d nodes\n",len);
	}
	else
	{   struct node *p;
	     p=root;
		while(i<loc)
		{
	     p=p->link;
	     i++;
	 }
	 temp->link=p->link;
	 p->link=temp;
	}
}
int display()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=root;
	if(temp==NULL)
	{
		printf("\nno nodes are avilable\n");
	}
	else
	{
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->link;
	}
	}
}
int length()
{   
     int len;
	struct node *temp;
	temp=root;
	while(temp!=NULL)
	{
	len++;
    temp=temp->link;
} 
    return len;
}
int Delete()
{
	int loc,len=length(),x=1;
	struct node *k=root,*y;
	printf("enter location:");
	scanf("%d",&loc);
	if(loc>len)
	{
		printf("invalid location\n");
	}
	else if(loc==1)
	{
	   root=k->link;
	   k->link=NULL;
	   free(k);
	}
	else
	{
	while(x<loc-1)
	{
		k=k->link;
		x++;
	}
	y=k->link;
	k->link=y->link;
	y->link=NULL;
	free(y);
    }
}
int Reverse()
{
struct node*root,*curr,*prev,*next,*temp;
curr=next=root;
prev=0;
	while(next!=0)
	{
		next=curr->link;
		curr->link=prev;
		prev=curr;
		curr=next;
	}
	root=prev;
	temp=root;	
	if(temp==NULL)
	{
		printf("\nno nodes are avilable\n");
	}
	else
	{
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->link;
	}
	}
}
int main()
{   int ch,k;
    printf("single linked list operations\n\n");
	printf("1.append\n2.inatbe\n3.insert\n4.length\n5.display\n6.delete\n7.reverse\n8.quit\n");
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
    		inatbe();
    		break;
    	case 3:
    		insert();
    		break;
    	case 4:
    	    k=length();
    	    printf("%d",k);
    		break;
    	case 5:
    		display();
    		break;
    	case 6:
    		Delete();
    		break;
    	case 7:
    		Reverse();
    		break;
    	case 8:
    		exit(1);
    		break;
    	default :
    	   printf("\nyour choice is invlid\n");
		}	
}
}

