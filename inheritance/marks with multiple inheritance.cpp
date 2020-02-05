#include<iostream>
using namespace std;
class academics
{

		protected:
    int marks_c;
    public:
    	void getdata_marks()
    	{
    		cout<<"enter the marks in c out of 100 \n";
    		cin>>marks_c;
		}
};
class sports
{
	protected:
		int marks_race;
		public:
			void getdata_ma()
			{
		       cout<<"enter the marks in race out of 100\n";
		       cin>>marks_race;
		}
};
class result:public sports,public academics 
{
	private:
		int final;
		public:
			
			void sum()
			{
				getdata_marks();
				getdata_ma();
				int sum=(marks_c+marks_race)/2;
				cout<<"final result is "<<sum;
			}
};
int main()
{
	result obj;
	obj.sum();
}

