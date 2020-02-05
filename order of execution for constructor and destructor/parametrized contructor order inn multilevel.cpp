#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
		A(int q)
		{
	
			cout<<"calling default base class constructor "<<q<<endl;
		
		}
		~A()
		{
			cout<<"calling default base class destructor\n";
			
		}
};
class B:public A
{    int l,m;
	public:
		B(int p,int q):A(q)
		{    l=p;
		  m=q;
			cout<<"calling parametrised derived class constructor of class b "<<l<<" "<<m<<endl;
		}
		~B()
		{
			cout<<"calling default derived class destructor\n";
		}
};
class C:public B
{
	int d,e;
	public:
		C(int p,int q):B(p,q)
		{
			d=p;
			e=q;
			cout<<"the calling paramatrised constructor  of  derived class  c "<<d<<" "<<e<<endl;
		}
};
int main()
{
	C obj(1,9);
	return 0;
}
