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
			friend number operator!(number);
			void showdata()
			{
				cout<<x;
			}
		
};
number operator!(number obj)
{ number temp;
	temp=!obj.x;
	return temp;
}
int main()
{   
number o,N(7),n(0);
!n;
o=operator!(N);
o.showdata();
}
