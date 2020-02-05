#include<iostream>
using namespace std;
int main()
{
	int a,b,c,*p,*q,*r;
	p=&a;
	q=&b;
	r=&c;
	cout<<"enter any three numbers"<<endl;
	cin>>a>>b>>c;
	if((*p)>(*q))
	{
		if((*p)>(*r))
		{
			cout<<(*p)<<"it is largest number among all";
		}
		else 
		{
			cout<<(*r)<<"it is largest among all";
			
		}
	}
	else
	cout<<*q<<"it is largest among all";
}
