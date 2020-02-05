#include<iostream>
using namespace std;
class time
{
	int h,m;
	public:
		time()
		{
			h=0;
			m=0;
		}
        time(int n)
        {
        	h=n/60;
        	m=n%60;
		}
		void showdata()
		{
			cout<<h<<" hours"<<m<<" mins";
		}
};
int main()
{
	time obj;
	int min;
	cout<<"enter time in minutes";
	cin>>min;
	obj=min;
    obj.showdata();	
}
