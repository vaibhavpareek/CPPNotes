#include<iostream>
#include<string.h>
using namespace std;
class String 
{
	private:
		char *s;
		int size;
		public:
			String(char *);
			~String();
			
};
 String::String(char *c)
{
	size=strlen(c);
	s=new char[size+1];
	strcpy(s,c);
	cout<<"\n string is:"<<s;
 }
 String::~String()
 {
 	delete s;
 	cout<<"\n memory is freed which was allocated dynamically to avoid memory leak"<<endl;
 	cout<<"after that string is"<<s;
 }
 int main()
 {
 	String obj1("hello");
 	return 0;
  } 
