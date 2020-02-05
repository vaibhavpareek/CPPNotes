#include<iostream>
#include<string.h>
using namespace std;
class abc
{
	public:
		char name[80];
		void getdata()
		{
			cout<<"enter name";
			gets(name);
			if(!(strcmp(name,"")))
		    {
		    	cout<<"\n\nyou cannot leave this feild empty";
		    	cout<<"\n\nenter name again";
		    	gets(name);
			}
		}
		void showdata()
		{
			cout<<"name = "<<name;
		}
};
int main()
{
	abc a;
	a.getdata();
	a.showdata();
}
