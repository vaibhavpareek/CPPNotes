#include<iostream>
using namespace std;
class array
{
	int *arr;
	int size;
	public:
		void get_data(int n);
		int get_sum();
		void display_data();
};
		
		void array::get_data(int n)
		{
			size=n;
			arr=new int[size];
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
				
			}
		}
		void array::display_data()
		 {
			for(int i=0;i<size;i++)
			{
				cout<<"\t"<<arr[i];
			}
			
		
		 cout<<"\n sum of elements"<<get_sum();
		 cout<<"\n average of numbers"<<float (get_sum()/size);
         }
	int array::get_sum()
	{
		int sum=0;
		for(int i=0;i<size;i++)
		{
			sum+=arr[i];
		}
		return sum;
	}
	int main()
	{
		array a;
		int n;
		cout<<"\n enter the numbers of elements:"<<endl;
		cin>>n;
		a.get_data(n);
		a.get_sum();
		a.display_data();
		
	}
	
