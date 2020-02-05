#include<iostream>
#include<fstream>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;
class admin_info
{
	char name_admin[80],passwd[80];
	public:
		void add_new_admin();
		void search_admin();
}
void admin_info::add_new_admin()
{
	 cout<<"\n\n\n\t\t=============================================IPL CRICKET TOURNAMENT CONTROLLER=====================================================";		
    cout<<"\n\t\t\t\t\tPROCEED TO ADD NEW ADMIN IN DATABASES";
    fstream file;
    file.open("admin.txt",ios::app);
    cout<<"\n\t\t\t\t\t\t\t\tNAME OF NEW ADMIN=";
    cin.getline(name_admin,80);
    fflush(stdin);
    cout<<"\n\t\t\t\tt\t\t\t\tPASSWORD OF NEW ADMIN=";
    cin.getline(passwd,80);
    l1=strlen(passwd);
    file<<name_admin<<passwd;
    file.close();
}
void admin_info::search_admin()
 {   char name[80],search[80];
	int j=0;
    fstream file;
	file.open("admin.txt",ios::in|ios::binary);
	file.seekg(0,ios::beg);
    cout<<"\n\n\t\t\t\t=============================NEW ADMIN IS SUCCESSFULLY ADDED IN DATABASES==================================";
		cout<<"\n\n\n\t\t=============================================IPL CRICKET TOURNAMENT CONTROLLER=====================================================";	
	cout<<"\n\n\t\t\t\t\t\t\tNAME=";
	cin.getline(name,80);
	cout<<"\n\n\t\t\t\t\t\t\tPASSWORD=";
	while(j<l1)
	{
		search[j]=getch();
		cout<<"*";
		j++;
	}
	while(file.eof()==0)
	{ 
	file>>passwd;
	cout<<search<<endl;
	cout<<passwd;
	if(!strcmp(passwd,search))
	{
		cout<<"\n\t\t\t\t\t\t\tWAIT..........AUTHENTICATING DATABASES................................";
		sleep(7);
		cout<<"\n\t\t\t================================= YOU HAVE SUCCESSFULLY LOGGED IN ====================================\n";
	   cout<<"\n\t\t\t\t\t=====================PRESS ANY KEY TO CONTINUE========================\n";
	   break;
	}
	else
	{
		cout<<"\n\t\t\t\t\t\t==========================ACCESS DENIED=======================";
		cout<<"\n\t\t\t\t\t\t=============PASSWD IS WRONG PLEASE TRY AGAIN=============";
		break;
	}
}
file.close();
ofstream fi("counter.txt");
ch++;
fi.put(ch);
}
int main()
{
		ifstream f("counter.txt");
	 while(!f.eof()==0)
    {
    	ch=f.get();
	}
	f.close();
	admin_info e[ch];
    e[ch].add_new_admin();
    for(i=0;i<ch;i++)
    {
    	e[i].search_admin();
	}
		if(!strcmp(passwd,search))
	{
		cout<<"\n\t\t\t\t\t\t\tWAIT..........AUTHENTICATING DATABASES................................";
		sleep(7);
		cout<<"\n\t\t\t================================= YOU HAVE SUCCESSFULLY LOGGED IN ====================================\n";
	   cout<<"\n\t\t\t\t\t=====================PRESS ANY KEY TO CONTINUE========================\n";
	   break;
	}
	else
	{
		cout<<"\n\t\t\t\t\t\t==========================ACCESS DENIED=======================";
		cout<<"\n\t\t\t\t\t\t=============PASSWD IS WRONG PLEASE TRY AGAIN=============";
		break;
	}
}
