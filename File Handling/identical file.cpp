#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{  char fname1[40],fname2[40];
	fstream s,s1;
	cout<<"enter name of first file\n";
	cin.getline(fname1,40);
	cout<<"enter name of second file\n";
	cin.getline(fname2,40);
	s.open(fname1,ios::in);
	s1.open(fname2,ios::in);
	char ch,ch1;
	if(!s||!s1)
	{
		cout<<"\n file should not be opened";
		exit(1);
	}
	s.get(ch);
	s1.get(ch1);
	while((s.eof()==0)&&(s1.eof()==0)&&(ch==ch1))
	{
		s1.get(ch1);
		s.get(ch);
	}
	if(ch=ch1)
	{
		cout<<"\nboth the files are identical"<<endl;
	}
	else
	{
		cout<<"\n both the files are not identical";
	}
}
