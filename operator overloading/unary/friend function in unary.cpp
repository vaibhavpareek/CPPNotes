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
			friend void operator-(number);
            void showdata()
			{    
			   cout<<x<<endl;
					}		
};
void operator-(number obj)
{   obj.x=-obj.x;
	cout<<obj.x<<endl;
}
int main()
{ number N(7),o(50);
	//-N;
	operator-(N);
	N.showdata();
operator-(o);
}
