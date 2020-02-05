#include<iostream>
using namespace std;
class sample
{
	private:
		static int num_objects;
		static int num_objects_destroyed;
		public:
			sample()
			{
				num_objects++;
			}
			~sample()
			{
				num_objects_destroyed++;
				
			}
			void showdata()
			{
				cout<<"no of objects created   "<<num_objects<<endl;
				cout<<"no of objects destroyed  "<<num_objects_destroyed<<endl;
				cout<<"no of objects active   "<<(num_objects-num_objects_destroyed)<<endl<<endl;
							}
};
int sample::num_objects=0;
int sample::num_objects_destroyed=0;
void myfunc()
{
	sample s8,s9;
	s9.showdata();
	
}
int main()
{
	sample s1,s2,s3;
	{
		s1.showdata();
	sample s4;
	{
		sample s5;
		s5.showdata();
	}
		
	}
	s3.showdata();
	myfunc();
	s2.showdata();
	return 0;
	
}
