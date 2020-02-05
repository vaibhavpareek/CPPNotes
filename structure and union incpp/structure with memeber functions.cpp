#include<iostream>
using namespace std;
struct abc
{
	int a,b;
	public:
		void sum()
		{
			int z;
			z=a+b;
			cout<<"the sum is "<<z;
		}
		void getdata()
		{
			cout<<"enter value for a and b";
             cin>>a>>b;
             
		}
}c;
int main()
{
	c.getdata();
	c.sum();
	return 0;
	
}
