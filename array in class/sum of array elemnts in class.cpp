#include<iostream>
using namespace std;
class simplearray
{
	int arr[100],n,sum=0,sumodd=0;
	public:
		void getdata()
		{ int i;
			cout<<"enter value for n"<<endl;
			cin>>n;
		cout<<"enter array  elements"<<endl;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		}
		void sum1()
		{int i;
			for(i=0;i<n;i++)
			{   if(arr[i]%2==0) 
				sum=sum+arr[i];
				else
				sumodd=sumodd+arr[i];
			}
		}
		void display()
		{
			cout<<"sum of even elements ="<<sum;
			cout<<"sum of odd elements="<<sumodd;
			
		}
};
int main()
{
	simplearray obj1;
	obj1.getdata();
	obj1.sum1();
	obj1.display();
	return 0;
}
