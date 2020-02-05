#include<iostream>
#include<stdio.h>
using namespace std;
class greator
{
	int x,y;
	public:
		greator(int a,int b)
		{
			x=a;
			y=b;
		}
		bool operator>(greator o)
		{
			if ((x>o.x)&&(y>o.y))
			return true;
			else
			return false;
		}
};
int main()
{
	greator o1(3,3),o2(3,2);
	if(o1>o2)//if(o1.operator>(o2))
	{
		cout<<"\n values of x and y for o1 are greator than o2";
	}
	else
	{
		cout<<"\n values of x and y for o1 are not greator than o2";
	}
}
