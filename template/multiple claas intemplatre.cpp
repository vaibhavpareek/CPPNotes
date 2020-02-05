#include<iostream>
using namespace std;
template<class T,class T1>
void multiply(T num,T1 num1)
{
	return (num*num1);
}
int main()
{
	int num1=5;
	float num2=525.5;
	 multiply<int,float>(num1,num2);
	multiply<int,int>(2,2);
	float num3=7.8;
	int num4=3;
	cout<<"\n product of num3*num4=";
	multiply<float,int>(num3,num4);
	cout<<endl;
	multiply<float,float>(22.36,25.3);
	return 0;
}
