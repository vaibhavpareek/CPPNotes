#include<iostream>
using namespace std;
int reverse(int);
int main()
{
	int n,rev,b;
	cout<<"enter any number"<<endl;
	cin>>n;
	b=n;
	rev=reverse(n);
	cout<<"reverse of that number"<<rev<<endl;
	if(b==rev)
{
	cout<<"this is number is a palindrome";
	}
	else
	{
		cout<<"this number is not a palindrome";
		}	
		
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
