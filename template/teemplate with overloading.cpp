#include<iostream>
using namespace std;
template<class T>
void display(T num)
{
	cout<<"template display :"<<num<<"\n";
}
template<class T1,class T2,class T3>
void display(T1 x,T2 y,T3 z)
{
	cout<<"template ddisplay:"<<x<<" "<<y<<z;
	
}
void display(int x)
{
	cout<<"explcit display :"<<x<<"\n";
}
void display(char y)
{
	cout<<"explicit display : "<<y<<"\n";
}

int main()
{
	int num=150;
	
   display(num);
   display(100.36);
   display('a');
   display(15.25,'f',25);
   
	return 0;
}
