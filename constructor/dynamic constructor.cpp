#include<iostream>
using namespace std;
class array
{
	private:
		int *arr;
		int n;
		public:
			array(int);
			void showdata();
			
};
array::array(int num)
{
	n=num;
	arr=new int[n];
	cout<<"\n enter the elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
}
void  array::showdata()
{
	cout<<"\nentered elements";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
}
int main()
{
	int size;
	cout<<"enter size of array"<<endl;
	cin>>size;
	array obj1(size);
	obj1.showdata();
	return 0;
	
}
