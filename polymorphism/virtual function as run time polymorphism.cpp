#include<iostream>
using namespace std;
class Base
{
	public:
		void print()
		{
			cout<<"\n Printing message in base class"<<endl;
		
		}
		virtual void show()
		{
			cout<<"\n show() of base class "<<endl;
		}
};
class Derived:public Base
{
	public:
		void print()
		{
		cout<<"\n printing message in derived class "<<endl;
		}
		void show()
		{
			cout<<"\n show() of derived class "<<endl;
		}
		
};
int main()
{
	Base *bptr;
	Base base ;
	bptr=&base;
	bptr->print();
	//cout<<"bptr points to base objects\n";
	bptr->show();
//derived class
    Derived derive;
	bptr=&derive;
	bptr->print();
	//cout<<"bptr now pointss to derived objects\n";
	//bptr->printDC();//IT WILLL NOT WORK
 	bptr->show();//bptr now points to derived objects	
    //accessing d using a pointer of type derivd class DC
	Derived *dptr;
	dptr=&derive;
	dptr->show();
	dptr->show();
	//cout<<"dptr is derived typr pointer\n";
	/*cout<<"using ((DC*)bptr)\n;
	((DC*)bptr->show();
	((DC*)bptr->printDC();*/
	//dptr=&base;//it will not work
	//dptr->show();//it will not work
	return 0; 
  
  }
