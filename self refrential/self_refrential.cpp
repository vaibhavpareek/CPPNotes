#include<iostream>
using namespace std;
class s
{
	int rollno;
	char name[10];
	int age;
	s *next;
	public:
		s()
		{
			next=NULL;
		}
		void getdata()
		{
			cout<<"enter rollno,name ,age"<<endl;
			cin>>rollno>>name>>age;
		}
		void link(s *t)
		{
			next=t;
		}
		void print()
		{
			s *p=this;
			while(p!=NULL)
			{
				cout<<"roll no= "<<p->rollno<<"name = "<<p->name<<" age ="<<p->age;
				cout<<"\n\n";
				p=p->next;
			}
		}
};
main()
{
	s obj1,obj2,obj3;
	obj1.getdata();
	obj2.getdata();
	obj3.getdata();
	obj1.link(&obj2);
	obj2.link(&obj3);
    obj1.print();
}
