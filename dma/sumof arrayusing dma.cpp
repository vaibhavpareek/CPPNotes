#include<iostream>
using namespace std;
int main()
{
	int *arr,i;
	int size,sum=0;
	cout<<"the size of array"<<endl;
	cin>>size;
	arr=new int[size];
	if(arr==NULL)
	{
		cout<<"memory cannot be allocated";
	}
	else
	{
		cout<<"enter values for array elements";
		for(i=0;i<size;i++)
		{
			cin>>arr[i];//*(arr+i)
			sum=sum+arr[i];
		}
		
	}
	cout<<"the sum of array elements "<<sum;
	delete []arr;
	return 0;
}
