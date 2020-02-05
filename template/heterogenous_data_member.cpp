#include<iostream>
using namespace std;
template<class T,class T1>
T1 hetero(T num,T1 num1)
{
	return (num*num1);
}
int main()
{
	int num1=5;
	float num2=525.5;
	cout<<"the area of rectangle is "<< hetero(num1,num2)<<endl;
	return 0;
}
