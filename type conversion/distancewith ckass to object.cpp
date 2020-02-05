#include<iostream>
using namespace std;
class Distance1
{
	int km,m;
	public:
		Distance1()
		{
			km=m=0;
		}
		void get_data()
		{
			cin>>km>>m;
		}
		 operator int()
		{
			int t=km*1000+m;
			return t;
		}
};
int main()
{
	int meter;
	Distance1 obj;
	cout<<"\n enter the distance in kms and meters";
	obj.get_data();
	meter=obj;
	cout<<"\n total meters"<<meter;
	return 0;
}
