
#include<iostream>
using namespace std;
enum shape
{circle=3,rectangle=5,triangle
};
int main()
{   int x,y;
	shape v1,v2,v3,v4,circle;
	//v1=shape(9);
	circle=circle;
	cout<<"value of circle"<<circle<<endl;
	v1=circle;
	cout<<"value of rectangle"<<rectangle<<endl;
	y=shape(9);
	x=circle;
	cout<<"value of x"<<x<<endl;
	cout<<"value of y"<<y<<endl;
	v3=rectangle;
	v4=triangle;
	v2=shape(12);
	cout<<"value is"<<v1<<"and memory in bytes is"<<sizeof(v1)<<endl;
      cout<<"value of v2           "<<v2<<endl;
      cout<<"value of v1           "<<v1<<endl;
      cout<<"value of rectangle "<<v3<<endl;
      cout<<"the value of triange="<<v4;
}
