#include<iostream>
using namespace std;
class M
{
	protected:
		int m;
		M(int a)
		{
			m=a;
			cout<<"constructor of class M"<<endl;
		}
		~M()
		{
			cout<<"destructor of class M";
		
		}
		};
class N
{
	protected:
		int n;
		N(int b)
		{
			n=b;
			cout<<"constructor of class N"<<endl;
		}
		~N()
		{
			cout<<"destructor of class N"<<endl;
		}
};
class P:public M,public N
{
	int l;
	public:
		P(int p,int q,int r):N(q),M(r)
		{
			l=p;
		  cout<<"constructor of derived class is called"<<endl;
		  
		}
		
		void display()
		{
			cout<<"m= "<<m<<" n= "<<n<<" l="<<l<<endl;
		}
		~P()
		{
			cout<<"destructor of derived class "<<endl;
		}
};
int main()
{
	P obj1(5,4,9);
	obj1.display();
}
