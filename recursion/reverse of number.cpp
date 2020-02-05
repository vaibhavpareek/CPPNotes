#include<iostream>
using namespace std;
int reverse(int);
int main()
{
	int n,rev;
	cout<<"enter any number"<<endl;
	cin>>n;
	rev=reverse(n);
	cout<<"reverse of that number"<<rev<<endl;
	return 0;
}
int reverse(int x)
{int a;
static int r=0;
	if(x==0)
	return r;
	else
	{
		a=x%10;
		r=r*10+a;
	    return reverse(x/10);
	   
	}
}
