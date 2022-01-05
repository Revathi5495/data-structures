#include<stdio.h>
#include<stdlib.h>
#define S 5
int queue[S];
int front=-1;
int rear=-1;
void enqueue(int ele)
{
	if(front==0&&rear==S-1)
	{
	printf("dequeue is ovarflow...\n");
}
	else if(front==-1&&rear==-1)
	{
		front++;
		rear++;
		queue[rear]=ele;
	}
	else
	{
		int ch;
		printf("1.from left to insert\n2.from right to insert\n");
		printf("\tenter your choice:");
		scanf("%d",&ch);
		if(ch==1)
		{
		front--;
		queue[front]=ele;
	}
		else
		{
		rear++;
		queue[rear]=ele;
	}
	}
}
void dequeue()
{
	if(front==-1&&rear==-1)
	{
	printf("dequeue is underflow...\n");
}
	else if(front==0&&rear==0)
	{
		front=rear=-1;
	}
	else
	{   
	    int ch;
		printf("1.from left to delete\n2.from right to delete\n");
		printf("\tenter your choice:");
		scanf("%d",&ch);
		if(ch==1)
		{
		front++;
	}
		else
		{
		rear--;
	}
}
}
int display()
{ 
     int i;
	if((front==-1&&rear==-1))
	{
		printf("circular queue is underflow\n");
	}
	else 
	{
		for(i=front;i<=rear;i++)
		{
		printf("dequeue[%d]=%d\n",i,queue[i]);
	}
}
}
int length()
{  
    int count;
    	if(front==-1&&rear==-1)
	{
		printf("dequeue is underflow\n");
	}
	else
	{
	while(display()!=S-1)
	{
	count++;
    }
}
    return count;
}

int main()
{
	int ch,ele;
	printf("CIRCULAR QUEUE OPERATIONS \n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.LENGTH\n5.EXIT\n");
	while(1)
	{
		printf("enter your choice:");
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
				printf("circular queue length",length());
				
			case 5:
				exit(1);
				break;
			default:
			printf("INVALID RESPONSE\n");
		}
	}
	return 0;	
}
