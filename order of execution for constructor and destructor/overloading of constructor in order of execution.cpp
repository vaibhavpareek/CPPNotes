#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
		A()
		{
	
			cout<<"calling default base class constructor\n";
		
		}
		A(int a,int b)
		{
		   x=a;
		   y=b;
		   cout<<"calling parametrized constructor of base  class "<<x<<y<<endl;	
		}
		~A()
		{
			cout<<"calling default base class destructor\n";
			
		}
};
class B:public A
{    int l,m;
	public:
		B()
		{
			cout<<"calling default constructor of derived class "<<endl;
		}
		B(int p,int q):A(p,q)
		{    l=p;
		  m=q;
			cout<<"calling default derived class constructor "<<l<<" "<<m<<endl;
		}
		~B()
		{
			cout<<"calling default derived class destructor\n";
		}
};
int main()
{
	B obj1;
	B obj(1,9);
	return 0;
}
