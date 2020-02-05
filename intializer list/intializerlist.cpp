#include<iostream>
using namespace std;
class abc_parameter
{
	int x,y;
	public:
		abc_parameter(int a,int b):x(a),y(b){};
		void display()
		{
			cout<<"\n value of x and y"<<x,y;
		}
};
int main()
{
	abc_parameter obj1(2,3),obj2(4,5);
	obj1.display();
	obj2.dis
	play();
	return 0;
}
