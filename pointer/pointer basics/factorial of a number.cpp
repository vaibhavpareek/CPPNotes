#include<iostream>
using namespace std;
int main()
{
	int n,*nu,f=1,i,*fact;
	nu=&n;
	fact=&f;
cout<<"enter any number:";
cin>>*nu;
for(i=1;i<=(*nu);i++)
{
	*fact=(*fact)*i;
}
cout<<"factorial is "<<(*fact);

}
