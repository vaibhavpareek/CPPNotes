#include<iostream>
using namespace std;
class time
{
	int h,m;
	public:
		time()
		{
			h=m=0;
		}
		void get_data()
		{
			cin>>h>>m;
		}
		 operator int()
		{
			int t=h*60+m;
			return t;
		}
};
int main()
{
	int min;
	time t1;
	cout<<"\n enter the time inhrs and minutes";
	t1.get_data();
	min=t1;
	cout<<"\n total minutes"<<min;
	return 0;
}
