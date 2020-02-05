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
		~A()
		{
			cout<<"calling default base class destructor\n";
			
		}
};
class B:public A
{    int l,m;
	public:
		B(int p,int q)
		{    l=p;
		  m=q;
			cout<<"calling parametrised derived class constructor "<<l<<" "<<m<<endl;
		}
		~B()
		{
			cout<<"calling default derived class destructor\n";
		}
};
int main()
{
	B obj(1,9);
	return 0;
}
