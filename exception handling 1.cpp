#include<iostream>
using namespace std;
int main()
{
	int a,b;
	try
	{
		cout<<"enter the values of a,b\n";
		cin>>a>>b;
		if(b==0)
		{
		throw 0;
		}
		cout<<"division="<<a/b;
	}
	catch(int x)
	{
		cout<<"division not possible";
	}
	return 0;
}
