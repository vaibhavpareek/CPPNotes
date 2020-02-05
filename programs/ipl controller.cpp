#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class interface;
class admin;
class user
{
	int 
	public:
		void player_info();
		void team_info();
		void point_table();
		void match_schedule();
		void allplayers();
		void allteams();
		void match_info();
		friend class admin;
    class player
    {
    	private:
    		int d_o_b;
	char country[80];
	int match,run,best,wicket,jersey_no;
	public:
		char name[80];
	void search_player();
	void showdata()
	};
	class team
	{
		
	}
};
class admin
{
	int
	public:
		void remove_player();
		void remove_team();
		void update_team();
		void update_player();
		void add_team();
		void update_point_table();
		void best_player();
		void update_match_schedule();
         class player_add
         {
         	int d_o_b;
	char country[80];
	int match,run,best,wicket,jersey_no;
	public:
		char name[80];
	void add_player();
	void showdata()
		 }
         
};
class interface
{
	int
	public:
		void user();
		void admin();
		void begin();
};
void match_schedule()
{       char ch;
	fstream file;
	file.open("match_schedule.txt",ios::in|ios::binary);
	while(file.eof()==0)
	{
	file.get(ch);
	cout<<ch;
	}
	file.close();
}
void allplayers()
{
	 char ch;
	fstream all;
	all.open("all_players.txt",ios::in|ios::binary);
	while(all.eof()==0)
	{
	all.get(ch);
	cout<<ch;
	}
	all.close();
}
void allteams()
{
	 char ch;
	fstream team;
	team.open("all_teams.txt",ios::in|ios::binary);
	while(team.eof()==0)
	{
	team.get(ch);
	cout<<ch;
	}
	team.close();
}
void player_add()
{ 
//practice
}
void team_add()
{
	//teamadd()
}
void interface::begin()
{ int i,login_choice,choice;
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t=============================================IPL CRICKET TOURNAMENT CONTROLLER=====================================================";
cout<<"\n\t\t\t\t\t\tPRESS 1: TO CONTINUE OR 0: EXIT";
cin>>i;
if(i==1)
{ system(cls);
 cout<<"\n\t\t=============================================IPL CRICKET TOURNAMENT CONTROLLER=====================================================";	
cout<<"\n\n\t\t\t\t\t\t\t\t============LOGIN AS USER OR AS ADMINSTRATOR=============";
cout<<"\n\n\t\t\t\t\t\tPRESS\n\t\t\t\t\t\t\t\t1:USER\n\t\t\t\t\t\t\t\t2:ADMINSTRATOR";
cin>>login_choice;
if(login_choice==1)
{   system("cls");
    cout"\n\t\t=============================================IPL CRICKET TOURNAMENT CONTROLLER=====================================================";	
	cout<<"\n\n\t\t\t\t\t=================================USER INTERFACE==================================";
	cout<<"\n\t\t\t\t\t\t1.SCHEDULED MATCHES;
	cout<<"\n\t\t\t\t\t\t2.PLAYER INFORMATION";
	cout<<"\n\t\t\t\t\t\t3.TEAM INFORMATION";
	cout<<"\n\t\t\t\t\t\t4.SCOREBOARD OF ANY MATCH";
	cout<<"\n\t\t\t\t\t\t5.POINT TABLE";
	cout<<"\n\t\t\t\t\t\t6.ALL PLAYERS";
	cout<<"\n\t\t\t\t\t\t7.ALL TEAMS";
	cout<<"\n\t\t\t\t\t\t8.BEST PERFORMERS";
	cout<<"\n\n\t\t\t\t\t=============YOUR CHOICE=";
	cin>>choice;cout<<"==============";
	system("cls");
	switch(choice)
	{ 
		case 1:match_schedule();
		break;
		case 2:player_info();
		break;
		case 3:team_info();
		break;
		case 4:scoreboard();
		break;
		case 5:point_table();
		break;
		case 6:all_players();
		break;
		case 7:all_teams();
		break;
		case 8:best_performers();
		break;
		default:cout<<"invalid input";
	}
}



}


cout<<"\n\t\t=============================================IPL CRICKET TOURNAMENT CONTROLLER=====================================================";
    cout<<"\n\t\t\t\tLOGIN ID:";
    cin>>login_id;
    cout<<endl<<"\t\t\t\tPASSWORD:";
    cin>>passwd;
    if(passwd==password)
    {
    	cout<<"\n\t\t\t\t\t\t\t===========YOU HAVE LOGGED IN SUCCESSFULLY==============";
	}
	else
	{   
		
	}
}



























