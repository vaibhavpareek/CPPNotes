#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	int m;
	void read(void);
	public:
		void write(void);
};
void sample::write(void)
{cout<<"this is update information"<<endl;
read();

}
void sample::read(void)
{sample obj1;
cout <<"this  is read function";
}

int main()
{
	sample obj1;
	obj1.write();
}
