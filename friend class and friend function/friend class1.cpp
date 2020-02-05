#include<iostream>
using namespace std;
class k17sd;
class k17kk
{
	int x,y,z;
	public:
		void getdata()
		{
			cout<<"enter any 3 value"<<endl;
			cin>>x>>y>>z;
			
		}
	friend class k17sd;
};
class k17sd
{
	public:
	void task1(k17kk s)
	{
	int sum;
	sum=s.x+s.y+s.z;
	cout<<"the sum is"<<sum<<endl;
	}
	void task2(k17kk su)
	{
		int sub;
		sub=su.x-su.y-su.z;
		cout<<"the subtraction is:"<<sub<<endl;
	}
	void task3(k17kk m)
	{
		int mul;
		mul=m.x*m.y*m.z;
		cout<<"the multiplication="<<mul<<endl;
	}
};
int main()
{
	k17kk obj1;
	k17sd ob1;
	obj1.getdata();
	ob1.task1(obj1);
	ob1.task2(obj1);
	ob1.task3(obj1);
return 0;
}
