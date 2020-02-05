#include<iostream>
using namespace std;
int main()
{
	int *arr1,*arr2,*arr3;
	int i,size;
	cout<<"the size of array"<<endl;
	cin>>size;
	arr1=new int[size];
	arr2=new int[size];
		arr3=new int[size];
	if(arr1==NULL||arr2==NULL||arr3==NULL)
	{
		cout<<"memory cannot be allocated";
	}
	else
	{
		cout<<"enter values for array 1 elements";
		for(i=0;i<size;i++)
		{
			cin>>arr1[i];//*(arr+i)
		}
		cout<<"enter values for array 2 elements";
		for(i=0;i<size;i++)
		{
			cin>>arr2[i];//*(arr+i)
		}cout<<"sum of both arrays"<<endl;
		for(i=0;i<size;i++)
		{
			arr3[i]=arr1[i]+arr2[i];//*(arr+i)
		    cout<<arr3[i]<<"\t";
		}
		
	}
	delete []arr1;
	delete []arr2;
	delete []arr3;
	return 0;
}
