#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
	char name[50];
	int age;
	public:
		void getdata();
		void putdata();
		
};
void employee::getdata()
{
	cout<<"enter your name\n";
	cin.get(name,50);
	cout<<endl;
	cout<<"enter your age\n";
	cin>>age;
	
}
void employee::putdata()
{
	cout <<"entered name is\n"<<name;
	cout <<"entered age is\n"<<age;
}
const int  size=3;
int main()
{
	
	employee emp[size];
	for(int i=0;i<size;i++)
	{
		emp[i].getdata();
	
	}
	
	for(int i=0;i<size;i++)
	{
		emp[i].putdata();
	
	}
	return 0;
}
