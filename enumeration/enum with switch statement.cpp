#include<iostream>
using namespace std;
enum  shape
{
	circle,rectangle,triangle
};
int main()
{
	int code,c;
	cout<<"enter shape code";
	cin>>code;
	while(code>=circle && code<=triangle)
	{
		switch (code)
		{
			case circle:
				cout<<"circle code is entered "<<endl;
				break;
			case rectangle:
			    cout <<"rectangle code is entered"<<endl;
		        break;
		    case triangle:
			     cout<<"triangle code is entered"<<endl;;   
		
		}       
		 
		 cout<<"enter shape code";
		 cin>>code;
	
	}
	cout<<"bye"<<endl;
	c=triangle - circle;
	cout <<"c is "<<c;
}

