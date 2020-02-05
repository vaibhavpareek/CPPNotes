#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		void set_value()
		{
			a=45;
			b=50;
		}
		friend float mean(sample s);
};
float mean(sample s)
{
	return float( s.a+s.b)/2.0;
}
int main()
{
	sample x;
	x.set_value();
	cout<<"mean value="<<mean(x)<<"\n";
	return 0;
}
