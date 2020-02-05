#include<iostream>
using namespace std;
template <class a,class b,class c>
class abc
{
	a x;
	b y;
	c z;
	public:
		void input()
		{
			cout<<"enter value for x ,y and z"<<endl;
			cin>>x>>y>>z;
			cout<<endl;
		}
		void min1()
		{
			if((x<y)&&(x<z))
			{
				cout<<"x ="<<x<<" is the smallest nunmber among all\n";
			}
			else if((y<x)&&(y<z))
			{
				cout<<"y ="<<y<<" is the smallest number among all\n";
			}
			else
			{
				cout<<" z ="<<z<<" is the smallest number among all\n";
			}
		}
 };
 int main()
 {
 	abc<int,int,int> obj1;
 	abc<int,float,float> obj2;
 	abc<double,double,float> obj3;
 	abc<double,double,int> obj4;
 	obj1.input();
 	obj1.min1();
 	obj2.input();
 	obj2.min1();
 	obj3.input();
 	obj3.min1();
 	obj4.input();
 	obj4.min1();
 	
	 return 0;
	 
	   } 
  
