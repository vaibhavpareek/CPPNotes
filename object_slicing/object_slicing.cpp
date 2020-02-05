#include<iostream>
using namespace std;
class base
{
	protected:
		int i;
		public:
			base(int a)
			{
				i=a;
			}
			void display()
			{
				cout<<"i am base class object , i = "<<i<<endl;
			}
};
class derived:public base
{
	int j;
	public:
		derived(int a,int b):base(a)
		{
			j=b;
		}
		void display()
		{
			cout<<"i am derived class object ,i = "<<i<<" j = "<<j<<endl;
		}
};
int main()
{
	base b(33);
	derived d(22,45);
	b.display();
	d.display();
	b=d;
	d.display();
	b.display();
	return 0;
}
