#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string.h>
using namespace std;
class team
{
	
	
	char ;
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
int main()
{	char search[80];
    int ch,up,i;
    player e[80];
	ofstream file;
	file.open("player_add.txt",ios::app|ios::binary);
    ifstream any1;
	any1.open("counting.txt");
	any1>>ch;
	any1.close();
	e[ch].add_player();
	file.write((char *)&e[ch],sizeof(e[ch]));
	file.seekp(0);
	file.close();
	ifstream file1;
	file1.open("player_add.txt",ios::in);
	cout<<"enter player name whose info you want to search\n";
	fflush(stdin);
	cout.flush();
     gets(search);
	  for(i=0;i<=ch;)
	 {
	    file1.read((char *)&e[i],sizeof(e[i]));
		if(!strcmp(e[i].name,search))
    	{
		e[i].showdata();
        }
        i++;
	 }
	  file.close();
	  ch++;
	  	ofstream any;
	  any.open("counting.txt");
	  any<<ch;
	  any.close();

	return 0;}
}
