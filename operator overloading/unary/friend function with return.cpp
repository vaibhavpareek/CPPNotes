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
			friend number operator-(number); 
			 		
};
number operator-(number obj)
{    number temp;
	temp=-obj.x;
	return temp;
}
int main()
{ number N,N1;
N=7;
N1=-N;
//N1=operator-(N);
N1.showdata();

}
