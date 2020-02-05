#include<iostream>
#include<fstream>
using namespace std;
int main()
{  int x;
int i;
	fstream file,file1;
	file.open("f1.txt",ios::in);
	file1.open("f2.txt",ios::app);
		file>>x;
		for(i=1;i<=10;i++)
		{
			file1<<x<<"x"<<i<<"="<<x*i<<endl;
		}
		file.close();
		file1.close();
}
