#include<iostream>
using namespace std;
void swap(int * ,int *);
int main()
{
	int a=100;
	int b=200;
	cout<<"before swap,value of a:"<<a<<endl;
	cout<<"before swap ,value of b"<<b<<endl;
	swap(&a,&b);
	cout<<"after swap,value of a:"<<a<<endl;
	cout<<"after swap ,value of b"<<b<<endl;
	return 0;
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<"after swapping value="<<*x<<endl;
	cout<<"after swapping value"<<*y<<endl;
	
}
