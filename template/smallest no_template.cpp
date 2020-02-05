#include<iostream>
using namespace std;
template<class T>
void smallest(T num,T num1)
{
	if(num>num1)
	{
		cout<<endl<<num<<"is greater than"<<num1<<endl;
	}
	else if(num<num1)
	{
		cout<<endl<<num1<<"is greater than"<<num<<endl;
	}
	else
	cout<<endl<<"both the numbers are same"<<endl;
}
int main()
{
	int num1=5,num2=6;
	smallest<int>(num1,num2);
	float num3=5.5,num4=25.5;
	smallest<float>(num3,num4);
	double num5=5.2525,num6=25.3636;
	smallest<double>(num5,num6);
	return 0;
}
