#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string.h>
using namespace std;
class team
{    
	char *team_name;
	int no;
    char cap[80];
	public:
	int team_no;
	void add_team();
	
};
void team::add_team() 
{   
    
	cout<<"\nEnter name of team:::";
	gets(team_name);
	cout<<"\nEnter number of matches played till::";
	cin>>no;
	fflush(stdin);
	cout<<"\nEnter name of captain of this team::";
	cin.getline(cap,80);
	
	//cout<<"\n========================================= team added successfully ===================================================\n";
}
int main()
{	int ch;
 char a;
    team e[80];
    ofstream outfile;
    outfile.open("all_teams.txt",ios::app);
    ifstream any1;
	any1.open("countingteam.txt");
	any1>>ch;
	any1.close();
	e[ch].team_no=ch;
	outfile<<e[ch].team_no<<".";
	 e[ch].add_team();
	outfile.write((char *)&e[ch],sizeof(e[ch]));
	outfile.seekp(0);
	outfile.close();
	fflush(stdin);
	cout.flush();
	  ch++;
	  	ofstream any;
	  any.open("countingteam.txt");
	  any<<ch;
	  any.close();
        ifstream file;
		file.open("all_teams.txt",ios::in);
		while(!file.eof())
		{
			file.get(a);
			cout<<a;
		}
		file.close();
	return 0;
	}
