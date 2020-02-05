#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	int a=10;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	//ptr=&a;now ptr is not a wild pointer 
	cout<<*ptr;
	return 0;
}
