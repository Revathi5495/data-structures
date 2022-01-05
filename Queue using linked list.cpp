#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
    struct node*link;
};
struct node *front=NULL;
struct node *rear=NULL;
int enqueue()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(front==NULL&&rear==NULL)
	{
	  front=rear=temp;
	}
	else
	{
	   rear->link=temp;
		rear=temp;
	}
}
int dequeue()
{
	struct node*temp;
	temp=front;
	if(front==NULL&&rear==NULL)
	{
	printf("NO ELEMENTS TO DELETE\n");
	}
	else
	front=front->link;
     temp->link=NULL;
     free(temp);
}
void display()
{
	struct node*temp;
	temp=front;
	if(front==NULL)
	{
	printf("NO ELEMENTS TO DISPLAY\n");
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
printf("=========QUEUE operations=========");
printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.exit\n");
while(1)
{
	printf("\nenter your choice:");
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
			printf("INVALID RESPONSE..");
	}
}
return 0;
}
