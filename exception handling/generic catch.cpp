#include<iostream>
using namespace std;
void test(int x)
{
	try
	{
		if(x==0)throw x;
		if(x==-1)throw 'x';
		if(x==1)throw 1.0;
	}
	catch(...)
		{
		cout<<"\n caught an exception";
}

}
int main()
{
	cout<<"testing generic catch";
	test(-1);
	test(0);
	test(1);
	return 0;
}
