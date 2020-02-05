#include<iostream>
using namespace std;
long int sumnumbers(int n);
int main()
{
	int n;
	cout<<"enter a positive integer"<<endl;
	cin>>n;
	cout<<"sum of numbers is :"<<sumnumbers(n);
	return 0;
}
long int sumnumbers(int n)
{
	if (n>=1)
	{
		return n+sumnumbers(n-1);
	}
	else
	return 0;
}
