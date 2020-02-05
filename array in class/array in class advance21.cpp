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
		void binarysearch()
		{int x,m,l=n-1,f=0,count=0;
			cout<<"enter element that you want to search"<<endl;
			cin>>x;
			while(f<l)
			{
				m=(f+l)+2;
				if(arr[m]==x)
				{count++;
				}
				else if(arr[m]>x)
				{
					l=m-1;
				}
				else
				{f=m+1;
				}
				
			}
			if(count==1)
			{
				cout<<"element found"<<endl;
			}
			else
			{cout<<"element not found"<<endl;
			}
			
		}
};
int main()
{
	simplearray obj1;
	obj1.getdata();
	obj1.sum1();
	obj1.display();
   obj1.linearsearch();
   obj1.binarysearch();
	return 0;
}
