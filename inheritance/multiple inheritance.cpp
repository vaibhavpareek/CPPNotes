#include<iostream>
using namespace std;
class x
{

		protected:
    int a;
    public:
    	void getdata_x()
    	{
    		cout<<"enter the value of  x\n";
    		cin>>a;
		}
};
class y
{
	protected:
		int b;
		public:
			void getdata_y()
			{
		       cout<<"enter the value of y\n";
		       cin>>b;
		}
};
class z:public y,public x
{
	private:
		int c;
		public:
			void getdata_z()
			{
				cout<<"enter value of z\n";
				cin>>c;
			}
			void sum()
			{
				getdata_x();
				getdata_y();
				getdata_z();
				int sum=a+b+c;
				cout<<"final result is "<<sum;
			}
};
int main()
{
	z obj;
	obj.sum();
}

