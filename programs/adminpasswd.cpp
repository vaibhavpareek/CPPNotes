#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string.h>
#include<unistd.h>
using namespace std;
class admin_info
{
	public:
	    char name_admin[80];
		char passwd[80];
	void add_new_admin();
	void showdata();

};
	void admin_info::showdata()
	{
		cout<<"\n\t\t\t\t\t\t\tWAIT..........AUTHENTICATING DATABASES................................";
		sleep(7);
		cout<<"\n\t\t\t================================= YOU HAVE SUCCESSFULLY LOGGED IN ====================================\n";
	   cout<<"\n\t\t\t\t\t=====================PRESS ANY KEY TO CONTINUE========================\n";
	}
    void admin_info::add_new_admin() 
{
    cout<<"\n\n\n\t\t=============================================IPL CRICKET TOURNAMENT CONTROLLER=====================================================";		
    cout<<"\n\t\t\t\t\tPROCEED TO ADD NEW ADMIN IN DATABASES";
    cout<<"\n\t\t\t\t\t\t\t\tNAME OF NEW ADMIN=";
    cin.getline(name_admin,80);
    fflush(stdin);
    cout<<"\n\t\t\t\tt\t\t\t\tPASSWORD OF NEW ADMIN=";
    gets(passwd);
}
int main()
{	char search[80],pwd[80];
    int ch,up,i;
    admin_info e[80];
	ofstream file;
	file.open("admin.txt",ios::app|ios::binary);
    ifstream any1;
	any1.open("counter.txt");
	any1>>ch;
	any1.close();
	e[ch].add_new_admin();
	file.write((char *)&e[ch],sizeof(e[ch]));
	file.seekp(0);
	file.close();
	ifstream file1;
	file1.open("admin.txt",ios::in);
	cout<<"enter admin name whose info you want to search\n";
	fflush(stdin);
	cout.flush();
     gets(search);
     cout<<"\nenter password";
     gets(pwd);
	  for(i=0;i<=ch;)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if((!strcmp(e[i].name_admin,search))&&(!strcmp(e[i].passwd,pwd)))
    	{
		e[i].showdata();
        }
        i++;
	 }
	  file.close();
	  ch++;
	  	ofstream any;
	  any.open("counter.txt");
	  any<<ch;
	  any.close();

	return 0;}
