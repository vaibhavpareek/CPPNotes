#include<iostream>
using namespace std;
int main()
{
	int *arr;
	int size;
	cout<<"the size of array"<<endl;
	cin>>size;
	arr=new int[size];
	if(arr=NULL)
	{
		cout<<"memory cannot be allocated";
	}
	else
	{
		cout<<"memory allocated successfully";
	}
	delete []arr;
	return 0;
}
