#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
	cout<<"\n we are inside the function";
	if((x-y)!=0)
	{
		int R=z/(x-y);
		cout<<"\nresult ="<<R;
		
	}
	else
	{
		throw(x-y);
	}
}
int main()
{
try	
{
	cout<<"we are inside the try block"<<endl;
	divide(10,20,30);
	divide(10,10,10);
}
catch(int i)
{
	cout<<"\ncaught the exception";
}
}

