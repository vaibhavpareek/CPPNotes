#include<iostream>
using namespace std;
int main()
{
	int *ptr=NULL;
	int a=10;
	cout<<ptr<<endl;//address
	cout<<*ptr;
	//cout<<*ptr;
	ptr=&a;
	cout<<ptr<<endl;
cout<<*ptr<<endl;
	return 0;
}
