#include<iostream>
using namespace std;
class employee
{
	int id;
	float salary;
	public:
		void input()
		{
			cout<<"enter value of id"<<endl;
			cin>>id;
			cout<<endl<<"enter value for salary";
			cin>>salary;
		}
		void showdata()
		{
			cout<<id<<salary<<endl;
		}
};
int main()
{
	int n,i;
	cout<<"\nenter number of employee"<<endl;
	cin>>n;
	employee *obj=new employee[n];
	if(obj==NULL)
	{
		cout<<"memory allocation failure";
	    exit(1);	
	}
	for(i=0;i<n;i++)
	{
		(obj+i)->input();
	}
	for(i=0;i<n;i++)
	{
		
		(obj+i)->showdata();
	}
	
	delete []obj;
}
