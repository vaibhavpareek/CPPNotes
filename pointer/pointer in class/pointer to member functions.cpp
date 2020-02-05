#include<iostream>
using namespace std;
class test
{
	public:
		void showmsg(int a);
		
};
void test::showmsg(int a)
{
	cout<<"\n hello world"<<a;
}
int main()
{
	void(test::*fp)(int);
	fp=&test::showmsg;
	test t;
	(t.*fp)(5);
	test *ptr=new test;
	(ptr->*fp)(7);
}
