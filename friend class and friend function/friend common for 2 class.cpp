#include<iostream>
using namespace std;
class abc;
class xyz
{
	int data;
	public:
		void setvalue(int value)
		{
			data=value;
		}
		friend void add(xyz,abc);
};
class abc
{
	int data;
	public:
		void setvalue(int value)
		{
			data=value;
		}
		friend void add(xyz,abc);
};

void add(xyz obj1,abc obj2)
{
	cout<<"sum of data values of xyz and abc objects using friend function\n"<<obj1.data+obj2.data;
	
}
int main()
{
	xyz obj1; 
	abc obj2;
	obj1.setvalue(5);
	obj2.setvalue(50);
	add(obj1,obj2);
	return 0;
	
}

