#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int arr[]={12,3,17,8};
	/*vector<int>v1(2);
	v1[0]=1;
	v1[1]=2;
	vector<int>v2(v1);
	cout<<"\n"<<v2.size();*/
	vector<int>  v(arr,arr+4);
	while(!v.empty())
	{
		cout<<"\n"<<v.back();
		v.pop_back();
	}
	cout<<"\n"<<v.size();
	v.resize(5);
	cout<<"\n"<<v.size();
	cout<<endl;
}
