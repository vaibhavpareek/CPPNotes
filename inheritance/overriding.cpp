#include<iostream>
using namespace std;
class A
{
     public:
     	void show()
     	{
     		cout<<"the class is base "<<endl;
		 }
		 
};
class B:public A
{
	public:
		void show()
		{
			cout<<"the class is derived "<<endl;
		}
};
int main()
{
	B obj1;
	obj1.show();
	obj1.A::show();
}
