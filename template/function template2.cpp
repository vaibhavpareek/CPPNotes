#include<iostream>
using namespace std;
template<class T>
T rectangle(T num,T num1)
{
	return (num*num1);
}
int main()
{
	int num1=5,num2=6;
	cout<<"the area of rectangle is "<< rectangle(num1,num2)<<endl;
	float num3=5.5,num4=25.5;
	cout<<"the area of  rectangle is "<<rectangle<float>(num3,num4)<<endl;
	double num5=5.2525,num6=25.3636;
	cout<<"the area of  rectangle is "<<rectangle<double>(num5,num6)<<endl;
	return 0;
}
