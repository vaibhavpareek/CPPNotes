#include<iostream>
using namespace std;
int main()
{  int x;
	int a,b;
	cout<<"enter values of a and b"<<endl;
	cin>>a>>b;;
	try
	{
		if(!(a>b))
		{
			cout<<"the a is smaller than b"<<endl;
		}
		else
		{
			throw(x);
		}
	}
	catch(int x)
	{
		cout<<"a is greator than b";
		
	}
	}
