#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>  v1(10);
	cout<<"size is \t"<<v1.size()<<"\n";
	for(int i=0;i<10;i++)
	{
		v1[i]=i;
	}
	for(int i=10;i<20;i++)
	{
		v1.push_back(i);
	}
	cout<<"\nsize is \t"<<v1.size()<<"\n";
	for(int i=0;i<=19;i++)
	{
		cout<<v1[i]<<"\t";
	}
	v1.pop_back();
	v1.pop_back();
	vector<int>::iterator v=v1.begin();
	while(v!=v1.end())
{
	cout<<"value of v ="<<*v<<endl;
	v++;
}
}
