#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int b;
int hsearch(int key,int d,int *ht,int *empty)
{
int i=key%(d);
int j=i;
int c=0;
do
{
if(empty[j]||(*(ht+j)==key))
return j;
c++;
j=(i+c)%(d);
}while(j!=i);
return 0;
}
int search(int key,int d,int *ht,int *empty)
{
b=hsearch(key,d,ht,empty);
printf("%d",b);
if(empty[b]==1)
return -1;
else if(b==0)
return 1;
else
return b;
}
void insert(int key,int d,int *ht,int *empty)
{
b=hsearch(key,d,ht,empty);
if(empty[b])
{
empty[b]=0;
*(ht+b)=key;
printf("elements is inserted\n");
}
}

void delete(int key,int d,int *ht,int *empty)
{
int b=hsearch(key,d,ht,empty);
*(ht+b)=0;
empty[b]=1;
printf("element is deleted\n");
}
void display(int d,int *ht,int *empty)
{
int i;
printf("hash table elements are\n");
for(i=0;i<d;i++)
{
if(empty[i])
printf(" 0");
else
printf("%5d",*(ht+i));
}
printf("\n");
}
void main()
{
int choice=1;
int key;
int d,i,s;
int *empty,*ht;
printf("enter the hash table size:");
scanf("%d",&d);
ht=(int *)malloc(d *sizeof(int));
empty=(int *)malloc(d *sizeof(int));
for(i=0;i<d;i++)
empty[i]=1;
while(1)
{
printf("\n");
printf("\n LINEAR PROBING");
printf("\n 1:insert hash table:");
printf("\n 2:delete hash table");
printf("\n 3:search hash table");
printf("\n 4:display hash table");
printf("\n 5:exit");
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the elemants:");
scanf("%d",&key);
insert(key,d,ht,empty);
break;
case 2:printf("enter to remove from hash table:");
scanf("%d",&key);
delete(key,d,ht,empty);
break;
case 3:printf("enter the search elements:");
scanf("%d",&key);
s=search(key,d,ht,empty);
if(s==-1||s==0)
printf("not found\n");
else
printf("element found at index %d",hsearch(key,d,ht,empty));
break;
case 4:display(d,ht,empty);
break;
case 5:exit(0);
}
}return;
}


