#include<iostream>
using namespace std;
class a
{
	protected:
		int x;
    public:
    	void getdata()
    	{
    		cout<<"enter the value of x:\n";
    		cin>>x;
		}
		
};
class B:public a
{
	private:
		int y;
		public:
			void get_data()
			{
				
				cout<<"\nenter the value of y\n";
				cin>>y;
			}
		    void add()
			{
			 int sum=x+y;
			 cout<<"sum is "<<sum;	
			}
};
int main()
{
	B obj;
	obj.getdata();
	obj.get_data();
	obj.add();
}

