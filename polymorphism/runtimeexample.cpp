#include<iostream>
using namespace std;
class base
{
	public:
		void show()
		{
			cout<<"in base class "<<endl;
		}
		
};
class derived:public base
{
	public:
		void display()
		{
			cout<<"in display function of derived class\n";
		}
        void show()
        {
        	cout<<"in derived class\n ";
		}
};
int main()
{
	base *bptr;
	base obj;
	bptr=&obj;
	bptr->show();//base  class show() function is called
	//bptr->display();
	derived  obj1;
	bptr=&obj1;
	bptr->show();//base class show() fuction would be called
	//bptr->display();
	derived *ptr;
	ptr=&obj1;//we can access derived class member functions using derived class pointer and object.
	//ptr->display();
	//ptr->show();
	//ptr->show();
	//ptr=&obj;we cannot pass base class object in derived class pointer
	ptr->display();
	ptr->show();// derived class show() function would be called
}
