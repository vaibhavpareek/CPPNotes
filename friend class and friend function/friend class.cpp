o#include<iostream>
using namespace std;
class ABC;
class xyz
{
	int data_xyz;
	public:
	void set(int value)
	{
		data_xyz=value;
	 } 
	 friend class ABC;
};
class ABC
{
	int data_abc;
	public:
		void setvalue(xyz obj1)
		{
			data_abc=obj1.data_xyz;
			cout<<"value is:"<<data_abc;
		}
};
int main()
{
	xyz x;
	ABC y;
	x.set(5);
	y.setvalue(x);
	return 0;
}
