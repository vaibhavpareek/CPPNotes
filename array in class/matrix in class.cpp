#include<iostream>
using namespace std;
class matrix
{
	int a[100][100],b[100][100],c[100][100],d[100][100],n,m;
	public:
		void getdata()
		{   int i,j;
			cout<<"enter value for no of rows and columns respaectively";
			cin>>n;
			cin>>m;
			cout<<"\nenter elements for 1 array";
			for(i=0;i<n;i++)
		{ for(j=0;j<m;j++)
			{
			cin>>a[i][j];
		}
		}
		cout<<"\nenter value of 2 array";
		for(i=0;i<n;i++)
		{  for(j=0;j<m;j++)
			{
			cin>>b[i][j];
		}
	}
	
		}
		void sum_matrix()
		{ int i,j;
		//	cout<<"sum  of two entered  matrix"<<endl;
		   for(i=0;i<n;i++)
		   { for(j=0;j<m;j++)
		   	c[i][j]=a[i][j]+b[i][j];
		   }
		}
	void display()
	{ int i,j;
		cout<<"sumof two matrix"<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
			cout<<" \nmultiplication of two matrix"<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cout<<d[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	void multiplication()
	{ int i,j,k;
		
	    for(i=0;i<n;i++)
	    { 
	    	for(j=0;j<m;j++)
	    	{  
			d[i][j]=0;
			for(k=0;k<=(j+1);k++)
	    	{
	    	  	d[i][j]=d[i][j]+(a[i][k]*b[k][j]);
			}
	    		
			}
		}
	}
};
int main()
{
	matrix obj1;
	obj1.getdata();
	obj1.sum_matrix();
	obj1.multiplication();
	obj1.display();
	return 0;
}
