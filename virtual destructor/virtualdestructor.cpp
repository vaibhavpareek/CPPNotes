#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"constructing base\n";
		}
		virtual ~base()
		{
			cout<<"destructing base\n";
		}
};
class derived1:public base
{
	public:
		derived1()
		{
			cout<<"destructing constructor\n";
		}
		~derived1()
		{
			cout<<"destructing derived\n ";
		}
};
int main()
{
	base *b =new derived1;
	delete b;
	return 0;
}
