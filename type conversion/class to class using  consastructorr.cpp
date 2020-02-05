#include<iostream>
using namespace std;
class square
{
	int side;
	public:
		square(int s)
		{
			side=s;
		}
		int get_side()
		{
			return side; 
		}
};
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
		   rectangle(square s)
		   {
		   	int sqr=s.get_side();
		   	l=b=sqr;
		   }
			void showdata()
			{
				cout<<"\n length="<<l<<" breadth"<<b;
			}
};

int main()
{
	rectangle obj(10,25);
	obj.showdata();
	square s(50);
    //obj=s;
    rectangle obj1;
     obj1=s;
	obj1.showdata();
	return 0;
	
	
	}
