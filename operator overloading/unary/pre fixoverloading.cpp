#include<iostream>
using namespace std;
class number
{
	private:
		int x;
		public:
			number()
			{
				x=0;
			
			}
			number(int n)
			{
				x=n;
			}
			void operator++()
			{
				cout<<"\n prefix increment :";
				cout<<++x<<endl;
			}
			friend void operator--(number);
		
};
void operator--(number obj)
{
	cout<<"\nprefix decrement ";
	cout<<--obj.x<<endl;
}
int main()
{ number N(7),n1(10);
	++N;
operator--(n1);
}
