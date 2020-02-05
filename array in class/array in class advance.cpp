#include<iostream>
using namespace std;
class simplearray
{
	int arr[100],n,sum=0;
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
			{ 
				sum=sum+arr[i];
			}
		}
		void display()
		{
			cout<<"sum ="<<sum;
			
		}
		void linearsearch()
		{int x,i,count=0;
			cout<<"enter element that you want to search"<<endl;
			cin>>x;
			for(i=0;i<n;i++)
		{  
			if(arr[i]==x)
			{
				count++;
				break;
			}
			else
			continue;
			
		}
		if(count==1)
		{
		cout<<"element found"<<endl;	
		}
		else
		cout<<"element is not present in that array"<<endl;
		}
};
int main()
{
	simplearray obj1;
	obj1.getdata();
	obj1.sum1();
	obj1.display();
   obj1.linearsearch();
	return 0;
}
