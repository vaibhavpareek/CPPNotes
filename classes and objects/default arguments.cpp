#include<iostream>
#include<conio.h>
using namespace std;
int sum(int x,int y,int z=4,int w=2)
{
	return(x+y+z+w);
	
}
int main()
{
	cout<<sum(10,15)<<endl;
	cout<<sum(10,15,25,665)<<endl;
	cout<<sum(10,15,25,30)<<endl;
}
