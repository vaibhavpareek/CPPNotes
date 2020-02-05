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
		abc()
		{
			x=258;
			y=254;
		}
		void display()
		{
			cout<<"\n values of x and y are "<<x<<"  "<<y;
		}
};
int main()
{
	abc obj3,obj1(2,4),obj2(4,5);//implicit call
	//abc obj1=abc(4,5);//explicit call
	obj1.display();
	obj2.display();
	obj3.display();
	
}
