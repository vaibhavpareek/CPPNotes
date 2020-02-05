#include<iostream>
using namespace std;
long int multiplynumbers(int n);
int main()
{
	int n;
	cout<<"enter a positive integer"<<endl;
	cin>>n;
	cout<<"factorial is :"<<multiplynumbers(n);
	return 0;
}
long int multiplynumbers(int n)
{
	if (n>=1)
	{
		return n*multiplynumbers(n-1);
	}
	else
	return 1;
}
