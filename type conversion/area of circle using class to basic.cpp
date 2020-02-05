#include<iostream>
using namespace std;
class area
{
	float r;
	public:
		area()
		{
			r=0;
		}
		void get_data()
		{
			cin>>r;
		}
		 operator float()
		{
			float a=r*3.14*r;
			return a;
		}
};
int main()
{
	float ar;
	area obj;
	cout<<"\n enter the radius in meters";
	obj.get_data();
	ar=obj;
	cout<<"\n area of circle"<<ar;
	return 0;
}
