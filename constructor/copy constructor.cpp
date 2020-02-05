#include<iostream>
using namespace std;
class copy1
{
	int x,y;
	public:
		copy1(int a,int b)
		{
			x=a;
			y=b;
		}
		copy1(copy1 &obj1)
		{
			x=obj1.x;
			y=obj1.y;
		}
		void display()
		{
			cout<<"values of x and y "<<x<<" "<<y<<endl;
		}
 };
 int main()
 {
 	copy1 obj1(2,78);
 	obj1.display();
 	copy1 obj2(obj1);
 	obj2.display();
 	copy1 obj3=obj1;
 	obj3.display();
 	return 0;
 }
