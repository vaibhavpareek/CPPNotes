#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char *arr,search[80];
	int size,i;
	cout<<"enter any string";
		gets(search);
	size=strlen(search);
	arr=new char[size];
	if(arr==NULL)
	{
		cout<<"memory cannot be allocated";
	}
	else
	{
		for(i=0;i<size;i++)
		{
		   arr[i]=search[i]; 
		}
	}
	cout<<"the entered string is  ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i];
	}
	delete []arr;
	return 0;
}
