#include<iostream>
using namespace std;
class transpose
{
	int n,m;
	int a[50][50],b[50][50];
	public :
		void getdata()
		{int i,j;
			cout<<"enter no of rows and coloumns respectively";
           	cin>>m>>n;
           	cout<<endl;
           	cout<<"enter elements for array"<<endl;
           	for(i=0;i<m;i++)
           	{
           		for(j=0;j<n;j++)
           		{
           			cin>>a[i][j];
				   }
			   }
		}
		void transpose_matrix()
           { int i,j;
           	cout<<"enter no of rows and coloumns respectively";
           	cin>>m>>n;
           	cout<<endl;
           	for(i=0;i<m;i++)
           	{
           		for(j=0;j<n;j++)
           		{
           			b[j][i]=a[i][j];
				   }
			   }
			   
		   }
		   void show()
		   {int i,j;
		   cout<<"transpose matrix"<<endl;
		   	 	for(i=0;i<m;i++)
           	{
           		for(j=0;j<n;j++)
           		{
           			cout<<b[i][j]<<" ";
				   }
				   cout<<"\n";
			   }
			   
		   }
		   
};
int main()
{
	transpose o;
	o.getdata();
	o. transpose_matrix();
     o.show();
	 }
