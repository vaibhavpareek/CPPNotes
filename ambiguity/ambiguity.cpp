#include<iostream>
using namespace std;
class B1
{
	public:
		void show_data()
		{
			cout<<"\n in base class 1 "<<endl;
		}
};
class B2
{
	public:
		void show_data()
		{
			cout<<"\n in base class 2"<<endl;
		
		}
};
class C:public B1,public B2
{
	public:
		C()
		{
			cout<<"\n constructor: in the derived class"<<endl;
		}
		/*void display()
		{
		B1::show_data();
		B2::show_data();
		*/
};
int main()
{
	C obj;
	//obj.show_data();
	//solution
	obj.B1::show_data();
	obj.B2::show_data();
	return 0;
}
