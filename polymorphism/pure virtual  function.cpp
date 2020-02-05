#include<iostream>
using namespace std;
class Base
{
   public:
   void print()   
{
	cout<<"\n print base class";
}
virtual void show()=0; 
};
class Derived:public Base
{
	public:
		void print()
		{
			cout<<"\n print derived class";
			
		}
   void show()
   {
   	cout<<"\n show base class and derived class";
   }
};
int main()
{    Base *ptr;
	Derived obj;
ptr=&obj;
ptr->print();
ptr->show();
return 0;

}



  
