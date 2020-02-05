#include<iostream>
using namespace std;
class test
{
	public:
		int x;
		void show_data();
	
};
void test::show_data()
{
	cout<<"\n x="<<x;
	
}
int main()
{
	test t;
	int test::*ptr=&test::x;
	//int test::*ptr;
	//ptr=&test::x;
	t.*ptr=20;
	t.x=45;//memeber defrencing pointer
	t.show_data();
	test *tp=new test;//dynamic memory allocation for object
	(*tp).*ptr=80;
	tp->show_data();
}

