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
				cout<<"\n postfix increment :";
				cout<<x++<<endl;
			}
			friend void operator--(number);
		
};
void operator--(number obj)
{
	cout<<"\npostfix decrement ";
	cout<<obj.x--<<endl;
}
int main()
{ number N(7),N1(7);
 //N++;
 N.operator++();
operator--(N1);
}
