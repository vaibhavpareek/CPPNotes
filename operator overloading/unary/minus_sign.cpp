#include<iostream>
using namespace std;
class number
{
	private:
		int x,y,z;
		public:
			number()
			{
				x=0;;
				y=0;z=0;
			}
number(int n,int n1,int n2)
{
	x=n;
	y=n1;
	z=n2;
}
void operator-()
{
	x=-x;
	y=-y;
	z=-z;
	
}
void showdata()
{
	cout<<"\nx="<<x<<endl;
	cout<<"\ny="<<y<<endl;
	cout<<"\nz="<<z<<endl;
}
};
int main()
{
	number n(1,2,3);
	//-n;
    n.operator-();
	n.showdata();
	return 0;
}
