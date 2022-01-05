#include<stdio.h>
#include<string.h>
#define MAX 50
int top=-1;
char stack[MAX];
void push(char item)
{
	if(top>MAX-1)
	{
		printf("stack is overflow..");
	}
	else
	{
		stack[++top]=item;
	}
}
 char pop()
{
   char item;
    item=stack[top];
    top--;
    return item;
}
int is_operator(char item)
{
	if(item=='+'||item=='-'||item=='*'||item=='/'||item=='%'||item=='^')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int precedence(char item)
{
	if(item=='^')
	   return 3;
	if(item=='*'||item=='/')
	   return 2;
	if(item=='+'||item=='-')
	   return 1;
}
int main()
{
	char infix[MAX],postfix[MAX],item,temp;
	int i=0,j=0;
	printf("enter your infix expression:");
	gets(infix);
	while((item=infix[i])!='\0')	
	{
		if(item=='(')
		{
			push(item);
		}
		else if((item>='A'&&item<='Z')||(item>='a'&&item<='z'))
		{
			postfix[j]=item;
			j++;
		}
		else if(is_operator(item)==1)
		{  
		    temp=pop();
			while(is_operator(item)==1&&precedence(item)<=precedence(temp))
			{
				postfix[j]=temp;
				j++;
				temp=pop();
		}
		push(temp);
		push(item);
		}
		else if(item==')')
		{    
		    temp=pop();
			while(temp!='(')
			{
				postfix[j]=temp;
				j++;
				temp=pop();
			}
		}
		else
		{
			printf("Invalid Expression\n");
			printf("postfix expression is not possible...and the operators is");
		}
		i++;
	}
	while(top>-1)
	{
		postfix[j]=pop();
		j++;
	}
	postfix[j]='\0';
	printf("postfix expression:");
	printf("%s",postfix);
	return 0;
}
