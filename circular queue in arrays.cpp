#include<stdio.h>
#include<stdlib.h>
#define S 5
int queue[S];
int front=-1;
int rear=-1;
void enqueue(int ele)
{
	if((front==0&&rear==S-1)||front==rear+1)
	{
	printf("circular queue is overflow..\n");
}
	else if(front==-1&&rear==-1)
	{
	front++; rear++;
	queue[rear]=ele;
}
	else if(front!=0&&rear==S-1)
	{
	rear=0;
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
		printf("circular queue is underflow\n");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else if(front==S-1)
	{
	front=0;
    }
    else
    {
    front++;	 
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
	if(front<rear)
	{
		for(i=front;i<=rear;i++)
		{
		printf("cqueue[%d]=%d\n",i,queue[i]);
	}
	}
	else
	{
		for(i=front;i<S;i++)
		 printf("cqueue[%d]=%d\n",i,queue[i]);
		for(i=0;i<=rear;i++)
		printf("cqueue[%d]=%d\n",i,queue[i]);
	}
}
}
int length()
{  
    int count;
    	if(front==-1&&rear==-1)
	{
		printf("circular queue is underflow\n");
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
