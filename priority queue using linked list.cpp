#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	int priority;
	struct node *link;
};
struct node*front=NULL;
struct node*rear=NULL;
void enqueue()
{
	struct node *temp,*q;
	temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the node data:");
    scanf("%d",&temp->data);
    printf("enter your priority:");
    scanf("%d",&temp->priority);
    if(front==NULL&&rear==NULL)
    {
    	temp->link=front;
    	front=temp;
	}
	else
	{
     q = front;
		while( q->link != NULL && q->link->priority <=temp-> priority )
			q=q->link;
		temp->link = q->link;
		q->link = temp;
	
	}
}
void dequeue()
{   
    struct node *temp;
    if(front==NULL&&rear==NULL)
	{
		printf("no nodes to delete\n");
		}	
	else
	{
		temp=front;
		printf("delete node is %d\n",temp->data);
		front=temp->link;
		temp->link=NULL;
		free(temp);
	}
}
void display()
{
	struct node *temp;
	temp=front;
    if(front==NULL&&rear==NULL)
	{
		printf("no nodes to delete\n");
		}	
	else
	{
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
}
int main()
{
	int ch,ele;
	printf("PRIORITY QUEUE OPERATIONS \n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
	while(1)
	{
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
			default:
			printf("INVALID RESPONSE\n");
		}
	}
	return 0;	
}
