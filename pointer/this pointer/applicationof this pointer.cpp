#include<iostream>
using namespace std;
class test 
{
	    private:
		int x;
		int y;
		public:
		test &setx(int a)
		{
			x=a;
			return *this;
		}
		test &sety(int b)
		{
			y=b;
			return *this;
		}
		
		void print()
		{
			cout<<"x="<<x<<endl<<"y="<<y<<endl;
		}
};
		int main()
{
		test obj1;
		obj1.setx(10).sety(20).print();
		return 0;
}
