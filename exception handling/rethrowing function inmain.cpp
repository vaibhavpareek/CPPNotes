#include<iostream>
using namespace std;
void divide(double x,double y)
{
	cout<<"\n inside function";
	try
	{
		if(y==0.0)
		{
			throw y;
			
		}
		else
		cout<<"\n ddivision ="<<x/y;
			}
	catch(double)
	{
		cout<<"\n caught double inside function\n";
		throw;
	}
	cout<<"\n end of function";
}
int main()
{
	cout<<"inside main"<<endl;
	try
	{
		divide(10.5,2.03);
	    divide(20.0,0.0);
	}
	catch(double)
	{
		cout<<"caught in main function"<<endl;
	}
	cout<<"\n end of main";
	return 0;
}
