#include<iostream>
using namespace  std;
int main()
{
	int a,*prime,i,count=1,*c;
	prime=&a;
	cout<<"enter any number";
	cin>>*prime;
	c=&count;
	for(i=1;i<=(*prime);i++)
	{
		if((*prime)%i==0)
		{
			(*c)++;
		}
		
	}
	if((*c)==3)
    {
	    cout<<"it is a prime number"<<endl;
	}	
else
{
	cout<<"it is not a prime number";
}

}
