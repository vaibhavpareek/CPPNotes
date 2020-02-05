#include<iostream>
using namespace std;
template<class T>
void swap(T &a,T &b)
{
	T temp=a;
	a=b;
	b=temp;
}
int main()
{
	int inum1=4,inum2=5;
	float fnum1=4.8,fnum2=-5.3;
	char c1='A',c2='a';
	cout<<"\n before swapping:";
	cout<<"\n inum1= "<<inum1<<" inum2= "<<inum2;
	cout<<"\n fnum1= "<<fnum1<<" fnum2= "<<fnum2;
	cout<<"\n c1= "<<c1<<" c2= "<<c2;
	swap<int>(inum1,inum2);
	swap<float>(finum1,finum2);
	swap<char>(c1,c2);
	cout<<"\n after swapping:";
	cout<<"\n inum1= "<<inum1<<" inum2= "<<inum2;
	cout<<"\n fnum1= "<<fnum1<<" fnum2= "<<fnum2;
	cout<<"\n c1= "<<c1<<" c2= "<<c2;
	return 0;
	}
	
