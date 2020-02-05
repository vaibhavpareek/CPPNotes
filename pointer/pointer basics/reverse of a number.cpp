#include<iostream>
using namespace std;
int main()
{
	int a,*nu,r=0,*l,b;
	cout<<"enter any number"<<endl;
	cin>>a;
    nu=&a;
    l=&b;
    while((*nu)>0)
    {
    	*l=(*nu)%10;
    	r=r*10+(*l);
    	(*nu)=(*nu)/10;
	}
	cout<<"the reverse of number: "<<r;
    
}

