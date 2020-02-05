#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{   char *p=NULL;
	p=new char('a');
	if(p==NULL)
	{
		cout<<"memory allocation failure";
		exit(1);
	}
	/*if(!p)//it will return p=0 if memory is not available
	{
	cout<<"memory allocation failure";
}*/
    //*p=12;
    
    cout<<"Integer value stored  is: "<<*p;
    cout<<"\nsize of "<<sizeof(p);
	delete p;
    cout<<"\n Memory deallocated";
    return 0;
}
