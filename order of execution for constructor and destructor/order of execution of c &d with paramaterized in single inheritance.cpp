#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
		A(int a,int b)
		{
			x=a;
			y=b;
			cout<<"calling parametrised  base class constructor\n"<<x<<y<<endl;
		
		}
		~A()
		{
			cout<<"calling default base class destructor\n";
			
		}
};
class B:public A
{    int l,m;
	public:
		B(int p,int q,int r,int s):A(r,s)
		{    l=p;
		  m=q;
			cout<<"calling paramatrised derived class constructor\n"<<l<<m<<endl;
		}
		~B()
		{
			cout<<"calling default derived class destructor\n";
		}
};
int main()
{
	B obj(1,4,5,9);
	return 0;
}
