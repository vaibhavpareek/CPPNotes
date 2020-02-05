#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"calling default base class constructor\n";
		
		}
		~A()
		{
			cout<<"calling default base class destructor\n";
			
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"calling default derived class constructor\n";
		}
		~B()
		{
			cout<<"calling default derived class destructor\n";
		}
};
int main()
{
	B obj;
	return 0;
}
