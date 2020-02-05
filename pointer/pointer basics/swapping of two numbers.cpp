#include<iostream>
using namespace std;
int main()
{
	int a=45, b=54,*q,*p,*r;
	cout<<"swapping of two numbers";
	q=&a;
	p=&b;
  (*r)=(*p);
  (*p)=(*q);
  (*q)=(*r);
cout<<"after swapping of two numbers"<<*p<<*q;
}
