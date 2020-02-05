#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
	fstream s,s1;
	s.open("source.txt",ios::in);
	s1.open("destination.txt",ios::out);
	char ch;
	if(!s||!s1)
	{
		cout<<"\n file should not be opened";
		exit(1);
	}
	s.get(ch);
	while(s.eof()==0)
	{
		s1.put(ch);
		s.get(ch);
		
	}
	cout<<"\n data copied successfully";
	return 0;
}
