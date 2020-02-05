#include<iostream>
using namespace std;
class item
{
	int number;
	float cost;
	public:
		void getdata(int ,float);
		void putdata(void)
		{
		cout <<"number:"<<number<<"\n";
		cout<<"cost:"<<cost<<"\n";
		}
		
};
void item::getdata(int a,float b)
{
number=a;
cost =b;
}
int main()
{ item x;
cout<<"\nobject x="<<"\n";
x.getdata(100,250.366);
x.putdata();
item y;
cout<<"\nobject y="<<"\n";
y.getdata(120,14.25);
y.putdata();

return 0;}
