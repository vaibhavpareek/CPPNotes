#include<iostream>
using namespace std;
class rectangle
{
	private:
		int l,b;
		public :
			rectangle()
			{
				l=b=0;
			}
			rectangle(int len,int bre)
			{
				l=len;
				b=bre;
			}
			void showdata()
			{
				cout<<"\n length="<<l<<" breadth"<<b;
			}
};
class square
{
	int side;
	public:
		square(int s)
		{
			side=s;
		}
		operator rectangle()
		{
			rectangle r(side,side);
			return r;
		}
};
int main()
{
	rectangle obj(10,25);
	obj.showdata();
	square s(50);
	obj=s;
	obj.showdata();
	return 0;
	
	
	}
