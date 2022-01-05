#include<stdio.h>
#include<stdlib.h>
#define L 5
int queue[L];
int front=-1;
int rear=-1;
void enqueue(int ele)
{
	if(rear==L-1)
	{
	printf("queue is full\n");
    }   
	else if(front==-1&&rear==-1)
	{
	front=rear=0;
	queue[rear]=ele;
}
	else
	{
	rear++;
	queue[rear]=ele;
}
}
void dequeue()
{
	if(front==-1&&rear==-1)
	{
	printf("No elements to delete\n");
}
    else if(front==rear)
    {
    	front=rear=-1;
	}
	else
	{
	front++;
}
}
void display()
{   
   	int i;
	if(front==-1&&rear==-1)
	{
	printf("No elements to display\n");
} 
	else
	for(i=front;i<=rear;i++)
	{	
	printf("queue[%d]=%d\n",i,queue[i]);
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
			printf("enter the element:");
			scanf("%d",&ele);
			enqueue(ele);
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
