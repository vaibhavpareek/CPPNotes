#include<iostream>
using namespace std;
int main()
{
	double *arr,sum=0.0;
	int size,i;
	cout<<"the size of array"<<endl;
	cin>>size;
	arr=new double[size];
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
	cout<<"the average of array elements "<<(sum/size);
	delete []arr;
	return 0;
}
