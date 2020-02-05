#include<iostream>
using namespace std;
class abc
{
	int x,y;
	public:
		abc(int a,int b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<"\n values of x and y are "<<x<<"  "<<y;
		}
};
int main()
{
	abc obj1(2,4),obj2(4,5);
	//abc obj1=abc(4,5);
	obj1.display();
	obj2.display();
	
}
