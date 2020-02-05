#include<iostream>
#include<stdio.h>
using namespace std;
class equality
{
	int x,y;
	public:
		equality(int a,int b)
		{
			x=a;
			y=b;
		}
		bool operator==(equality o)
		{
			if ((x==o.x)&&(y==o.y))
			return true;
			else
			return false;
		}
};
int main()
{
	equality o1(3,3),o2(3,2);
	if(o1==o2)//if(o1.operator==(o2))
	{
		cout<<"\n values of x and y for o1 and o2 are same";
	}
	else
	{
		cout<<"\n values of x and y for o1 and o2 are not same";
	}
}
