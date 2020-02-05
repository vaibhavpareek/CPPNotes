#include<iostream>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{  char name_admin[80],search[40],passwd[40],name[80];
int i=0;
  cout<<"\n\n\n\t\t=============================================IPL CRICKET TOURNAMENT CONTROLLER=====================================================";		
    cout<<"\n\t\t\t\t\tPROCEED TO ADD NEW ADMIN IN DATABASES";
    fstream file;
    file.open("admin.txt",ios::in|ios::out);
    cout<<"\n\t\t\t\t\t\t\t\tNAME OF NEW ADMIN=";
    cin.getline(name_admin,80);
    fflush(stdin);
    cout<<"\n\t\t\t\tt\t\t\t\tPASSWORD OF NEW ADMIN=";
    cin.getline(passwd,40);
    file<<name_admin<<passwd;
    cout<<"\n\n\t\t\t\t=============================NEW ADMIN IS SUCCESSFULLY ADDED IN DATABASES==================================";
		cout<<"\n\n\n\t\t=============================================IPL CRICKET TOURNAMENT CONTROLLER=====================================================";	
	cout<<"\n\n\t\t\t\t\t\t\tNAME=";
	cin.getline(name,80);
	cout<<"\n\n\t\t\t\t\t\t\tPASSWORD=";
	while(i<40)
	{
		search[i]=getch();
		cout<<"*";
		i++;
	}
	file.getline(passwd,40);
	cout<<"\n\t\t\t\t\t\t\tWAIT..........AUTHENTICATING DATABASES................................";
		sleep(7);
	if(!strcmp(passwd,search))
	{
		cout<<"\n\t\t\t================================= YOU HAVE SUCCESSFULLY LOGGED IN ====================================\n";
	   cout<<"\n\t\t\t\t\t=====================PRESS ANY KEY TO CONTINUE========================\n";
	   file.close();
	}
	else
	{
		cout<<"\n\t\t\t\t\t\t==========================ACCESS DENIED=======================";
		cout<<"\n\t\t\t\t\t\t=============PASSWD IN WRONG PLEASE TRY AGAIN=============";
		file.close();
	}
}
