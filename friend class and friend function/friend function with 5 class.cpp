#include<iostream>
using namespace std;
class abc;
class xyz2;
class xyz3;
class xyz4;
class xyz1
{
	int data;
	public:
		void setvalue(int value)
		{
			data=value;
		}
		friend void add(xyz1,xyz2,xyz3,xyz4,abc);
};
class xyz2
{
	int data;
	public:
		void setvalue(int value)
		{
			data=value;
		}
		friend void add(xyz1,xyz2,xyz3,xyz4,abc);
};
class xyz3
{
	int data;
	public:
		void setvalue(int value)
		{
			data=value;
		}
		friend void add(xyz1,xyz2,xyz3,xyz4,abc);
};
class xyz4
{
	int data;
	public:
		void setvalue(int value)
		{
			data=value;
		}
		friend void add(xyz1,xyz2,xyz3,xyz4,abc);
};
class abc
{
	int data;
	public:
		void setvalue(int value)
		{
			data=value;
		}
		friend void add(xyz1,xyz2,xyz3,xyz4,abc);
};

void add(xyz1 obj1,xyz2 obj2,xyz3 obj3,xyz4 obj4,abc obj5)
{
	cout<<"sum of data values of xyz and abc objects using friend function\n"<<obj1.data+obj2.data+obj3.data+obj4.data+obj5.data;
	
}
int main()
{
	xyz1 obj1; 
	xyz2 obj2;
    xyz3 obj3;
    xyz4 obj4;
    abc obj5;

	obj1.setvalue(5);
	obj2.setvalue(50);
		obj3.setvalue(5);
	obj4.setvalue(50);
		obj5.setvalue(5);
	
	
	add(obj1,obj2,obj3,obj4,obj5);
	return 0;
	
}

