#include<iostream>
using namespace std;
class complex
{
	float x,y;
	public:
		complex()
		{
			x=0.0;
			y=0.0;
		}
		complex(float real,float imag)
		{
			x=real;
			y=real;
		}
		 friend complex operator+(complex,complex);
		
		void showdata()
		{
			cout<<"value is"<<x<<"+i"<<y;
		}
	
};
 complex operator+(complex obj1,complex obj2)
		{
			complex temp;
			temp.x=obj2.x+obj1.x;
			temp.y=obj2.y+obj1.y;
			return temp;
		}
int main()
{
	complex o1(2.2,3.5),o2(5.4,4.3),o3;
	o3=o1+o2;
	//o3=operator+(o1,o2);
	o3.showdata()
}
