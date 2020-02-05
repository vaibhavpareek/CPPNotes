#include<iostream>
using namespace std;
void task(int a,int b,int c=3,int d=4)
{
	cout<<a<<" "<<b<<" "<<c<<" "<<d;
	
}
int main()
{
	task(2,3);
	task(2,3,10);
	task(2,4,5,6);
}
