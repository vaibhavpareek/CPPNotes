#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		void set_value()
		{
			cout<<"enter value of a and b"<<endl;
			cin>>a>>b;
			
		}
		friend float mean(sample s);
};
float mean(sample s)
{
	return float( s.a+s.b)/2.0;
}
int main()
{
	sample x,y;
	x.set_value();
	cout<<"mean value="<<mean(x)<<"\n";
		y.set_value();
	cout<<"mean value="<<mean(y)<<"\n";
	return 0;
}
