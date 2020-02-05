#include<iostream>
using namespace std;
class Operator
{
	protected: 
	  int x;
	public:
		void set()
		{  cout<<"enter the value of x"<<endl;
		cin>>x;
		}
};
class square:public Operator
{
	public:
		void squ()
		{  int sq;
		    sq=(x*x);
			cout<<"the area of square of x: "<<sq<<endl;
		}
};
class fact: public Operator 
{  int fac;
	public:
        void factorial()
        {
        	int i;
        	fac=1;
        	for(i=x;i>=1;i--)
        	{
        		fac=fac*i;
			}
			cout<<"the factorial  of x: "<<fac<<endl;
		}

};
int main()
{
	square obj1;
	fact obj2;
	obj1.set();
	obj1.squ();
	obj2.set();
	obj2.factorial();
	return 0;
}


