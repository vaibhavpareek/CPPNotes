
#include<iostream>
using namespace std;
class  student
{
	private :
		int roll_no;
	protected:
    char section[22];
    public:
    	void get_rno()
    	{
    		cout<<"enter the rool no of any student:";
    		cin>>roll_no;
		}
		void showdata()
		{
			cout<<"rollno :"<<roll_no;
		}
};
class result:private student
{
	private:
		float fees;
		public:
			void get_data()
			{
				get_rno();
				cout<<"enter the fees\n";
				cin>>fees;
				cout<<"enter the section\n";
				cin>>section;
			}
			void display()
			{
				showdata();
				cout<<"fees\n"<<fees;
				cout<<"section"<<section;
			}
};
int main()
{
	result obj;
	obj.get_data();
	obj.display();
}
