#include<iostream>
using namespace std;
class distance1
{
	int m,km;
	public:
		distance1()
		{
			m=0;
		    km=0;
		}
        distance1(int n)
        {
        	km=n/1000;
        	m=n%1000;
		}
		void showdata()
		{
			cout<<km<<" kms"<<m<<" meters";
		}
};
int main()
{
    distance1 obj;
	int meter;
	cout<<"enter distace in meters";
	cin>>meter;
	obj=meter;
    obj.showdata();	
}
