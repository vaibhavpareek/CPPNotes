#include<iostream>
using namespace std;
int main()
{  int x;
	int a,b;
	cout<<"enter values of a and b"<<endl;
	cin>>a>>b;
	x=a-b;
	try
	{
		if(x!=0)
		{
			cout<<"the quotient is "<<x<<endl;
		}
		else
		{
			throw(x);
		}
	}
	catch( int  i)
	{
		cout<<"the value cannot be divide by zero";
		
	}
	}
