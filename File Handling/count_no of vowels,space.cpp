#include<iostream>
#include<fstream>
using namespace std;
int main()
{  char ch;   
int vowels=0,line=1,space=0,tab=0,no=0;
	ifstream file;
	file.open("source.txt");
    while(1)
	{
		ch=file.get();
     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
     {
     	vowels++;
	 }
	 else if(ch=='\n')
	 {
	 	line++;
	 }
	 else if(ch==' ')
	 {
	 	space++;
	 }
	 else if(ch=='\t')
	 {
	 	tab++;
	 }
	 else
	 no++;
	if(file.eof()==1)
	break;
	}
	 cout<<"line"<<line<<endl;
	 cout<<"vowels"<<vowels<<endl;
	 cout<<"spaces"<<space<<endl;
	 cout<<"tab"<<tab<<endl;
	 cout<<"total charater"<<no<<endl;
}
