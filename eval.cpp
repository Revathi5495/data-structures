#include<stdio.h>
#include<ctype.h>
#define SIZE 50
int stack[SIZE];
int top=-1;
void push(int ele)
{
	stack[++top]=ele;
}
int pop()
{
	return stack[top--];
}
int result(char ch,int op1,int op2)
{
	 switch(ch)
	 {
	 	case '+':
	 		push(op1+op2);
	 		break;
	 	case '-':
	 		push(op1-op2);
	 		break;
	 	case '*':
	 		push(op1*op2);
	 		break;
	 	case '/':
	 		push(op1/op2);
	 		break;
	 	case '%':
	 		push(op1%op2);
	 		break;
		 }	
}

int main()
{
char postfix[SIZE],ch;
int i=0,op1,op2,r;
printf("enter the postfix expression:");
gets(postfix);
while((ch=postfix[i])!='\0')
{
     i++;
	 if(isdigit(ch))
	 {
	 	push(ch);
	 }
	 else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'||ch=='%')
	 {
	 	op2=pop();
	 	op1=pop();
	 	r=result(ch,op1,op2);
	 }
}
         printf("given postfix expressionis:%s\n",postfix);
         printf("Result:%d\n",stack[top]);
         return 0;
}
