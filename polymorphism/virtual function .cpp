#include<iostream>
using namespace std;
class base
{
    public:
	       virtual void show()
		  {
		  	cout<<"the base class \n";
				}      
				
};
class derived:public base
{
	public:
	   void show()
		{
			cout<<"the derived class\n";
		}
		void display()
		{
			cout<<"the derived class display fuction\n";
		}
};
int main()
{
	base *ptr;
	base obj;
	ptr=&obj;
	ptr->show();
	derived *dptr,obj1;
	dptr=&obj1;
	dptr->display();
	dptr->show();
	ptr=&obj1;
	ptr->show();
	
}
