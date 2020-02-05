#include<iostream>
using namespace std;
class emp
{

		protected:
    float salary;
    public:
    	void getdata_salary()
    	{
    		cout<<"enter the salary of employee\n";
    		cin>>salary;
		}
};
class bonus:public emp
{
	protected:
		float  bonuss;
		public:
			int sum;
			void getdata_bonus()
			{
		       cout<<"enter the bonus for  employee\n";
		       cin>>bonuss;
		    }
		    void generate()
		    {
		    	cout<<"total amount of salary";
		     sum=salary+bonuss;
		    	cout<<sum;
		    	cout<<endl;
			}
};
class tax:public bonus
{
	private:
		int taxx;
		public:
			void getdata_tax()
			{
				cout<<"enter tax applied on him\n";
				cin>>taxx;
			}
			void final()
			{
				getdata_salary();
				getdata_bonus();
				getdata_tax();
				int sum1=(sum-taxx);
				cout<<"final salary is "<<sum1;
			}
};
int main()
{
	tax obj;
	obj.final();
}

