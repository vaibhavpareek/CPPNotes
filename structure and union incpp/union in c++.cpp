#include<iostream>
using namespace std;
union employee
{char name[50];
int age;
float salary;
};
int main()
{
	employee e1;
	cout<<"enter fullname";
	cin.get(e1.name,50);
	cout <<"name "<<e1.name<<endl;
	cout<<"enter age"<<endl;
	cin >>e1.age;
	cout <<endl<<"age "<<e1.age<<endl;
	cout <<"enter salry"<<endl;
	cin>>e1.salary;
	cout<<endl<<"salary="<<e1.salary;
}
