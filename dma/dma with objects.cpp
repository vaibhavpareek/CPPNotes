#include<iostream>
using namespace std;
class sample
{
	public:
		sample()
		{
			cout<<"constructor will be called"<<endl;
		}
		~sample()
		{
			cout<<"destructor will be called"<<endl;
		}
};
int main()
{
	sample *obj;
	obj=new sample[4];
	delete []obj;;
    return 0;
}
