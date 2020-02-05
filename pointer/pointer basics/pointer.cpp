#include<iostream>
using namespace std;
int main()
{
	int num,*pnum,*pnum1,*pnum2,*pnum3;
	float x=2.0;
	pnum=&num;
	cout<<"\n enter the numbers";
	cin>>num;
	cout<<"the number that was entered"<<num<<endl;
	cout<<"\n adddress of that number"<<pnum<<endl;
	*pnum=4;
	cout<<"\n new value for variable num"<<num<<endl;
	pnum2=pnum;
	cout<<"\n value of num"<<*pnum<<endl;
	*pnum2=9;
	cout<<"\n neeew value for variable"<<num<<endl;
	//pnum3=&x;invalid in c++ as integer pointer is storing values
}
