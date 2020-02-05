#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
    int *p1,*p2;
    int *x;
    int a=2;
    x=&a;
    p1=arr;
    p2=p1+6;
    p2=p2-2;
    cout<<p2-p1<<endl;
while(p1<=p2)
{
	cout<<*p1<<endl;
	p1++;
}
cout<<*p1<<endl;
x++;
cout<<x<<endl;
return 0;
}

