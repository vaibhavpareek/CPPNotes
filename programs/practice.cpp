#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string.h>
using namespace std;
class player
{
	
	int d_o_b;
	char country[80];
	int match,run,best,wicket,jersey_no;
	public:
		char name[80];
	void add_player();
	void showdata()
	{
		cout<<"\n\t\t\t\t\t\tInformation of player ";
		cout<<"\nname::"<<name;
		cout<<"\ndate of birth::"<<d_o_b;
		cout<<"\ncountry::"<<country;
		cout<<"\njersey number::"<<jersey_no;
		cout<<"\nBatting statistics";
		cout<<"\nmatch played::"<<match;
		cout<<"\ntotal runs::"<<run;
		cout<<"\nBowling statistics";
		cout<<"\ntotal wickets"<<wicket;
		cout<<"\n best performance"<<best;
	}
};
class team
{     char captain_name[80];
      int no;
	public:
		char team_name[80]; 
			void team_info()
	{
		cout<<"\n\t\t\t\t\t\tInformation of player ";
		cout<<"\nname of team:"<<team_name;
		cout<<"\ncaptain of team:"<<captain_name;
		cout<<"\nno of matches played"<<no;
	}
		void add_team()
		{
	cout<<"Enter details of team :::\n";
	cout<<"Enter name of team";
	gets(team_name);
	cout<<"\n captain of team ";
	gets(captain_name);
	cout<<"\nno of matches played";
	cin>>no;
	cout<<"\n========================================= Team added successfully ===================================================\n";
		}
};
void player::add_player() 
{
   
	cout<<"Enter details of player :::\n";
	cout<<"Enter name of player";
	gets(name);
	cout<<"\nEnter date of birth ";
	cin>>d_o_b;
	cout<<"\nPlayer's home country";
	cin>>country;
	cout<<"\nBatting statistics";
	cout<<"\nMatches played";
	cin>>match;
	cout<<"\nTotal runs";
	cin>>run;
	cout<<"\nBowling stastics";
	cout<<"\nTotal wickets";
	cin>>wicket;
	cout<<"\nBest";
	cin>>best;
	cout<<"\nJersey number";
	cin>>jersey_no;
	cout<<"\n========================================= player added successfully ===================================================\n";
}
int again()
{   int ch;
	cout<<"enter preffered key";
	cout<<"\npress 1 for adding player";
	cout<<"\npress 2 for adding player to team";
	cout<<"\npress 3 to add another team";
	cout<<"\npress 4 to go back";
	cin>>ch;
	return ch;
	
}
int main()
{	char search[80];
    int ch,up,i,ag;
    player a[80];
    team e[80];
	reset:
	system("cls");
	fstream file,file1,file2;
	file.open("team_add.txt",ios::app|ios::binary);
    fstream any1,any2,any3,any4;
	any1.open("counterteam.txt",ios::in);
	any1>>ch;
	any1.close();
	e[ch].add_team();
	file.write((char *)&e[ch],sizeof(e[ch]));
	file.seekp(0);
	file.close();
	up=again();
	switch(up)
	{
		case 1:
		file1.open("player_add.txt",ios::out);
		any2.open("counting.txt");
		any2>>ch;
		any2.close();
		a[ch].add_player();
		 file.write((char *)&e[ch],sizeof(e[ch]));
        file1.close();
		any3.open("counting.txt",ios::out);
		ch++;
		any3<<ch;
		any3.close();
		break;
		case 3:goto reset;
		break;
		default:goto reset;
	}
	file2.open("team_add.txt",ios::in);
	cout<<"enter team name whose info you want to search\n";
	fflush(stdin);
	cout.flush();
     gets(search);
     any4.open("counterteam.txt",ios::in);
     any4>>ag;
     any4.close();
	  for(i=0;i<=ag;)
	 {
	    file2.read((char *)&e[i],sizeof(e[i]));
		if(!strcmp(e[i].team_name,search))
    	{
		e[i].team_info();
        }
        i++;
	 }
	  file2.close();

	return 0;}
