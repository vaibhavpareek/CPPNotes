#include<iostream>
using namespace std;
class sample
{
	private:
		int x;
		public:
			sample(int n)
			{
				x=n;
				cout<<"constructor called with value x "<<x<<endl;
				
			}
			~sample()
			{
				cout<<"destructor called with value x "<<x<<endl;			}
};
int main()
{
	sample s1(1);
	sample s2(2);
	sample s3(3);
	return 0;//program ends so that dstructors will be called
}
