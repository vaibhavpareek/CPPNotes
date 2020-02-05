#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class error
{
	int err_code;
	char *err_desc;
	public:
		error(int c,char *d)
		{
			err_code=c;
			err_desc= new char[strlen(d)];
			strcpy(err_desc,d);
			
		}
		void err_display()
		{
			cout<<"\n error code"<<err_code<<"\n error desc"<<err_desc;
		}
};
int main()
{
	try
	{
		cout<<"\npress any key";
		getch();
		error obj(99,"this is error");
		throw obj;
	}
	catch(error e)
	
	{
		cout<<"\n execution caught successfully";
		e.err_display();
	}
	return 0;
}

