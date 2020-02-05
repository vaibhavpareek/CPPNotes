#include<iostream>
using namespace std;
class d;
class a;
class b;
class c
{
	int data_c;
	public:
		void showc(int value)
		{
			data_c=value;
			cout<<"the value is"<<data_c<<endl;
			
		}
		void func(d obj1);
	
};
class b
{int data_b;
	public:
		void showb(int value)
		{
			data_b=value;
			cout<<"the value is"<<data_b<<endl;
			
		}
		void funb(d obj2);
	
};
class a
{
	int data_a;
	public:
		void showa(int value)
		{
			data_a=value;
			cout<<"the value is"<<data_a<<endl;
			
		}
		void funa(d obj3);
};
class d
{
	int data;
	public:
		void getdata(int value)
		{
			data=value;
		}
		friend void a::funa(d obj3);
friend void b::funb(d obj2);
friend void c::func(d obj1);
};
void a::funa(d obj3)
{
	int sum;
	sum=obj3.data+5;
	cout<<"the sum is"<<sum<<endl;
}
void b::funb(d obj2)
{
	int sub;
	sub=obj2.data-5;
	cout<<"the subtraction is"<<sub<<endl;
}
void c::func(d obj1)
{
	int mul;
	mul=obj1.data*5;
	cout<<"the multiplication is"<<mul<<endl;
}
int main()
{
	d ob1;
	a ob2;
	b ob3;
	c ob4;
	ob1.getdata(5);
	ob2.funa(ob1);
	ob3.funb(ob1);
	ob4.func(ob1);
	ob2.showa(10);
	ob3.showb(12);
	ob4.showc(14);
	return 0;
}
