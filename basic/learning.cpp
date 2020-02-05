#include<iostream>
using namespace std;
class abc
{ char name[2][50];
	public:
	void def();
};
void abc::def()
{int i;
	for(i=0;i<2;i++)
	{
		//gets(name[i]);
		cin.getline(name[i],50);
		cout <<name[i];
	}

}
int main()
{
	abc obj1;
	obj1.def();
    
}
