#include<iostream>
using namespace std;
class sample
{
	public:
		void show()
		{
			cout<<"\n Normal function";
	
		}
		virtual void display()=0;
};
class abc:public sample
		{
			public:
				void display()
				{
					cout<<"\n ddispaly function";
				}
		};
		int main()
		{
			sample *bptr;//pointer to abstract base class
		    abc obj1;
		    bptr=&obj1;
		    bptr->display();
		    bptr->show();
		    return 0;
		
		}

