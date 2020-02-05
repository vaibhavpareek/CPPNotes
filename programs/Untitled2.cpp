#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
//char comment[80];
char ch;
//cout<<"\n Enter your feedback about this college:";
//cin.getline(comment,80);
//int len=strlen(comment);
fstream FILE;
FILE.open("all_teams.txt",ios::in|ios::out);
/*for(int i=0;i<len;i++)
{
FILE.put(comment[i]);
}*/
FILE.seekg(0);
//cout<<"\n USER'S FEEDBACK:";
while(FILE.eof()==0)
{
FILE.get(ch);
cout<<ch;
}
FILE.close();
}
