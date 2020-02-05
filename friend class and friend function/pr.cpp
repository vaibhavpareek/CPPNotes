#include<iostream>
using namespace std;
int factorial(int x)
{ 
	if(x==1)
	{
		return 1;
	}
	else
	{
		return (x*factorial(--x));
	}
	
}
int main()
{
	int fact1;
	fact1=factorial(6);
	cout<<"value of factorial is "<<fact1;
	return 0; 
}

