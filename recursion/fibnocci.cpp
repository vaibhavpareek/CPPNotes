#include<iostream>
using namespace std;
long long int fibnocci(int n);
int main()
{
	int n,i;
	cout<<"enter a positive integer"<<endl;
	cin>>n;
	cout<<"fibnocci is :"<<endl;
	for(i=1;i<n+1;i++)
	{
		cout<<fibnocci(i)<<endl;
	}
	return 0;
}
long long int fibnocci(int n)
{ 
	if (n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	return fibnocci(n-1)+fibnocci(n-2);
}
