#include<iostream>
using namespace std;
class test
{
	int x;
	public:
		void setx(int x)
		{
			(*this).x=x;
			
		}
		void print()
		{
			cout<<"x="<<x
			<<endl;
			cout<<"address of current object:"<<this<<endl;
		}
};
		int main()
		{
			test t,obj;
			t.setx(20);
			t.print();
			obj.setx(50);
			obj.print();
			
		}

