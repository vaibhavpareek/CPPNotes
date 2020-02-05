#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
char name[10];
float sal;
fstream outFile("Employee.txt",ios::out);
for(int i=0;i<3;i++)
{
cout<<"\n Enter the name and salary of Employee:"<<i+1<<" : ";
cin>>name>>sal;
outFile<<name<<"\t"<<sal<<"\n";
}
outFile.close();
ifstream inpFile("Employee.txt");
if(!inpFile)//! returns a non-zero value if error occurs otherwise zero
{
    cout<<"\n File could not be opened";
    exit(1);
}
for(int i=0;i<3;i++)
{
inpFile>>name;
inpFile>>sal;
cout<<"\n Employee "<<i+1<<" : ";
cout<<name<<"\t"<<sal;
}
inpFile.close();
}
