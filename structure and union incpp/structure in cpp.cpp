#include<iostream>
using namespace std;
struct employee
{
	char name[50];
	int age;
	float salary;
	
};
int main()
{
	employee e1;
	cout <<"enter full name:";
	gets(e1.name);
	cout <<"enter age";
	cin>>e1.age;
	cout<<"enteer your salry";
	cin>>e1.salary;
	
	cout <<"displaying information"<<endl;
	cout<<"name is"<<e1.name<<endl;
	cout<<"age is "<<e1.age;
	cout<<"salary is "<<e1.salary;
	
}
