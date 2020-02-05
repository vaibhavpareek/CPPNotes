#include<iostream>
using namespace std;
void test(int x)
{  
	try
	{
		if(x==1)
		throw 1;
		else if(x==0)
		throw 'x';
		else if (x==-1)
		throw 5.0f;
		else if(x==2)
		throw "caught a string value";
		cout<"end of try block";
	}
	catch(char c)
	{
		cout<<"\n  caught a  character";
	}
	catch(int m)
	{
		cout<<"\n caught an integer";
	}
	catch(float d)
	{
		cout<<"\n caugth a float";
	}
	catch(const char*message)
	{
		cout<<"\n"<<message;
	}
	cout<<"\nend of try catch ssystem";
}
int main()
{
	cout<<"\n tesstying multiple catches\n";
	cout<<"\n x=1";
	test(1);
	cout<<"\n x=0";
	test(0);
	cout<<"\n x=-1";
	test(-1);
	cout<<"\n x=12";
	test(12);
	cout<<"\n x=2";
	test(2);
	return 0;
}
