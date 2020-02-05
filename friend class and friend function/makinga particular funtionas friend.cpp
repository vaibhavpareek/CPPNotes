#include<iostream>
#include<conio.h>
using namespace std;
class xyz;
class abc
{
	int data_abc;
	public:
		void setvalue(xyz obj1);//set values function will be a friend function for xyz class
	
		};
		class xyz
		{
			int data_xyz;
			public:
				void set(int value)
				{
					data_xyz=value;
				}
				friend void abc::setvalue(xyz obj1);//set value is a friend to xyz  class which is specified
		};
		void abc ::setvalue(xyz obj1)
		{
		data_abc=obj1.data_xyz;
		cout<<"value is:"<<data_abc;	
		}
		int main()
		{
			xyz x;
			abc a;
			x.set(5);
			a.setvalue(x);
			getch();
			return 0;
		}
