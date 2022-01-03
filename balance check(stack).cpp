#include<stdio.h>
#include<string.h>
int main()
{
	char exp[50],temp,stack[50];
	int n,top,i;	
	printf("enter an expression:");
	gets(exp);
	n=strlen(exp);
	for(i=0;i<n;i++)
{
	if((exp[i]=='['||exp[i]=='{'||exp[i]=='(')&&top==-1)
	{
	break;
    }
    if((exp[i]=='['||exp[i]=='{'||exp[i]=='(')&&top==-1)
    {
    	top++;
    	stack[top]=exp[i];
	}
	else
	{
		temp=stack[top];
		top--;
		if(temp=='{'&&exp[i]=='}'||temp=='['&&exp[i]==']'||temp=='('&&exp[i]==')')
		 {
		 	continue;
		 }
		 else
		 {
		 	break;
		 }
	}
}
	if(i==n&&top==-1)
	{
		printf("balenced");
	}
	else
	{
		printf("unbalenced");
	}
	return 0;
}
