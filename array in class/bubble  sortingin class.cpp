#include<iostream>
using namespace std;
class sorting12
{
	int a[100];
	int n;
	public:
		 void getdata()
		 {  int i;
			cout<<"enter no of elements"<<endl;
			cin>>n;
			cout<<"enter array elements"<<endl;
			for(i=0;i<n;i++)
			 {
				cin>>a[i];
			 }
			
		  }
		 void sorting()
		 { 
			int pass,hold,i;
			cout<<"data items in orginal order"<<endl;
			for(i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			for(pass=1;pass<n;pass++)
	   	  { 
		 for (i=1;i<n-1;i++)
		 { 
			hold=a[i];
			a[i]=a[i+1];
			a[i+1]=hold;
			
		 }
		   }
		 cout<<"after sorting"<<endl;
		 for (i=0;i<n;i++)
		 {
			cout<<a[i]<<" ";
		 }
		 }
};
int main()
{
	sorting12 obj1;
	obj1.getdata();
	obj1.sorting();
	return 0;
}
