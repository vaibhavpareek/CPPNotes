#include<iostream>
#include<conio.h>
using namespace std;
class nest_fun
{int l,b,area;
public:
	void input();
	void output(int ,int);
	
};
void nest_fun ::input()
{cout<<"enter length and breadth of rectangle:";
cin>>l>>b;
output(l,b);
}
void nest_fun::output(int l,int b)
{cout<<"length="<<l<<"   "<<"breadth="<<b<<endl;
area=l*b;
cout<<"area="<<area;

}
int main()
{nest_fun n;
n.input();
getch();
return 0;
}
