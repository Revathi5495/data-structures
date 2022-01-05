#include<iostream>
using namespace std;
int main()
{
	int a,b;
	try
	{
		cout<<"enter the values of a,b\n";
		cin>>a>>b;
		if(a>b?1:0)
		{
		cout<<"subtraction="<<a-b;
		}
		else
		{
			throw 0;
		}
	}
	catch(int x)
	{
		cout<<"substraction in negitive (exception caught)";
	}
	return 0;
}
