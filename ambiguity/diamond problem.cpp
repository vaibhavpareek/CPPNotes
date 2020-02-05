#include<iostream>
using namespace std;
class B
{
	protected:
		int x;
		public:
			void get_db()
			{
				cout<<"enter value of x:"<<endl;
				cin>>x;
			}
};
class DB1: public virtual B
{
	protected:
	int y;
	public:
	void get_db1()
	{
		cout<<"enter value of y"<<endl;
		cin>>y;
		}	
};
class DB2:public virtual B
{
	protected:
		int z;
		public:
			void get_db2()
			{
				cout<<"enter value of  z"<<endl;
				cin>>z;
			}
};
class D:public DB1,public DB2
{
	    protected:
		int sum;
		public:
		void sum_no()
		{
		sum=x+y+z;
		cout<<"the result is"<<sum;	
		}
};
int main()
{
	D obj;
	obj.get_db();
	obj.get_db1();
	obj.get_db2();
	obj.sum_no();
	return 0;
}
