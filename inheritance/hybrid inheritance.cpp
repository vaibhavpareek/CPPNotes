#include<iostream>
using namespace std;
class student
{
	protected :
		int roll_no;
		public:
			void get_number(int a)
			{
				roll_no=a;
			}
			void put_number()
			{
				cout<<"roll no:"<<roll_no<<endl;
			}
};
class test:public student
{
	protected:
		float part1,part2;
		public:
			void get_marks(float x,float y)
			{
				part1=x;
				part2=y;
			}
			void put_marks()
			{
				cout<<endl<<"\npart1="<<part1<<"\n"<<"part2"<<part2<<endl;
			}
};
 class sports
 {
 	protected:
 		float score;
 		public:
 			void get_score(float s)
 			{
 				score=s;
			 }
			 void put_score()
			 {
			 	cout<<"\n the score is "<<score<<endl;
			 }
 };
 class result:public test,public sports
 {
 	float total;
 	public:
 		void display()
 		{
 			total=part1+part2+score;
 			put_number();
 			put_marks();
 			put_score();
 			cout<<"total score:"<<total<<endl;
		 }
 };
 int main()
 {
 	result obj1;
 	obj1.get_number(222);
 	obj1.get_marks(25.4,45.9);
 	obj1.get_score(44.4);
 	obj1.display();
 	
 	return 0;
 }

