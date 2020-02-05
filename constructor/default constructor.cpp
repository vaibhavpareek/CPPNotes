#include<iostream>
using namespace std;
class abc
{
	int x,y;
	public:
		abc()
		{
			cout<<"enter values of x and y";
			cin>>x>>y;
		}
		void display()
		{
			cout<<"\n values of x and y are "<<x<<"  "<<y;
		}
};
int main()
{
	abc obj1,obj2;
	obj1.display();
	obj2.display();
	
}
