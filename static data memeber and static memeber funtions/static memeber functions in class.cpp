#include<iostream>
using namespace std;
class id_generator
{
	static int next_id;
	public:
		static void gennextid()
		{
			cout<<"\n next id ="<<next_id++;
		}
};
int id_generator::next_id=1;
int main()
{
	for(int i=0;i<5;i++)
	{id_generator::gennextid();
	}
}

