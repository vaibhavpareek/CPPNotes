#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
class alpha
{
	protected:
		T a;
		public:
			void check()
			{
				cout<<"\nhello\n";
			}
};
template <class T,class T1>
class beta:public alpha <T>
{
	private:
		T1 b;
		public:
			void get()
			{
		    cin>>alpha<T>::a>>b;	
			}
			void display()
			{
				cout<<"a :"<<alpha<T>::a<<endl;
				cout<<"b :"<<b<<endl;
				alpha<T>::check();
			}
};
int main()
{
	beta<int,float>b1;
	beta<float,int>b2;
	cout<<"\n enter a int and b float ";
    b1.get();
	b1.display();
	cout<<"\n enter a nad b";
	b2.get();
	b2.display();	
}
