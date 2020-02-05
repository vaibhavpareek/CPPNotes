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
		abc(int a)
		{
			x=a*a;
		}
		abc(int b,int a,int c)
		{
			x=a+b+c;
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
	abc obj3,obj1(2,4),obj2(4,5),obj4(4,8,9),obj5(6);//implicit call
	//abc obj1=abc(4,5);//explicit call
	obj1.display();
	obj2.display();
	obj3.display();
	obj4.display();
	obj5.display();
	
}
