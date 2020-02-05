#include<iostream>
using namespace std;
template<typename T>
T square(T num)
{
	return (num*num);
}
int main()
{
	int num1=5;
	cout<<"the area of  square is "<<square<int>(num1)<<endl;
	float num2=5.5;
	cout<<"the area of  square is "<<square<float>(num2)<<endl;
	double num3=5.2525;
	cout<<"the area of  square is "<<square<double>(num3)<<endl;
	return 0;
}
