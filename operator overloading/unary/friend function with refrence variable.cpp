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
			void showdata()
			{
				cout<<endl<<x;
			}
			friend void operator-(number& ); 
			 		
};
void operator-(number &obj)
{
	obj.x=-obj.x;
}
int main()
{ number N(7);
	//-N;
operator-(N);
N.showdata();

}
