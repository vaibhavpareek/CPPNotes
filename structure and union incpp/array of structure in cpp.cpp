#include<iostream>
using namespace std;
struct employee
{
	char name[50];
	int age;
	float salary;
	
}e[20];
int main()
{int i;
	for(i=0;i<20;i++)
	{
	cout <<"enter full name:";
	gets(e[i].name);
	cout <<"enter age";
	cin>>e[i].age;
	cout<<"enteer your salry";
	cin>>e[i].salary;
	
	cout <<"displaying information"<<endl;
	cout<<"name is"<<e[i].name<<endl;
	cout<<"age is "<<e[i].age;
	cout<<"salary is "<<e[i].salary;
}
}
