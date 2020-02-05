#include<iostream>
using namespace std;
int main()
{
	int *pvalue=NULL;
	pvalue =new int;
	*pvalue=23;
	cout<<"value of pvalue   "<<*pvalue<<endl;
	cout<<"address of pvalue   "<<pvalue<<endl;
	delete pvalue;
	cout<<"value of pvalue   "<<*pvalue<<endl;	
	cout<<"address of pvalue   "<<pvalue<<endl;
	pvalue=0;
	cout<<"address after assigning null"<<pvalue;
	return 0;
}

