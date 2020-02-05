#include<iostream>
using namespace std;
template <class T,class T1,class T2=char>
class abc
{
	T id;
	T1 fees;
	T2 grade;
	public:
		abc(T x,T1 y,T2 z)
		{
			id=x;
			fees=y;
			grade=z;
			
		}
		void display()
		{
			cout<<"ID ="<<id<<" fees = "<<fees<<" grade "<<grade;
		}
};
int main()
{
	abc<int,float> obj(10,25.36,'a');
	cout<<"data is "<<endl;
	obj.display();
}
