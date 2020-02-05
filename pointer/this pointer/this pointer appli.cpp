#include<iostream>
using namespace std;
class student
{
	char name[100];
	int age,roll;
	float percent;
	public:
		void getdata()
		{
			cout<<"Enter data"<<endl;
			cout<<"name:"<<endl;
			cin>>name;
			cout<<"age:"<<endl;
			cin>>age;
			cout<<"roll no:"<<endl;
			cin>>roll;
            cout<<"percent:"<<endl;
            cin>>percent;
		}
		student &max(student &s1,student &s2)
		{
			if(percent>s1.percent && percent>s2.percent)
			return *this;
			else if(s1.percent>percent && s1.percent>s2.percent)
			return s1;
			else
			return s2;
		}
		void display()
		{
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"roll:"<<roll<<endl;
			cout<<"percent"<<percent<<endl;
		}
};
int main()
{
	student s,s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s=s3.max(s1,s2);
	s.display();
	
}
