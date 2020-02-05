#include<iostream>
using namespace std;
class student
{
	int roll,marks;
	public:
		student()
		{
			roll=0;
			marks=0;
		}
		student(int r,int m=0)
		{
			roll=r;
			marks=m;
		}
		void showdata()
		{
			cout<<"result"<<endl<<roll<<marks<<endl;
		}
};
int main()
{
	student obj1;
	obj1.showdata();
	student obj2(5);
	obj2.showdata();
	student obj3(4,5);
	obj3.showdata();
	return 0;
}
