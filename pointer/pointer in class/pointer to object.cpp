#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		int y;
		void getdata()
		{
			cout<<"enter value of x"<<endl;
			cin>>x;
			cout<<"value for y"<<endl;
		}
		void showdata()
		{
			cout<<"value of x"<<x<<endl;
			
		}
		
};
int main()
{
	A obj1;
	A *ptr;
	ptr=&obj1;
	ptr->getdata();
	cin>>ptr->y;
    ptr->showdata();
	(*ptr).getdata();
	(*ptr).showdata();
     
}


