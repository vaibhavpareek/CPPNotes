#include<iostream>
using namespace std;
class school
{
	int class_room;
	int no_teachers;
	public:
		void get_data()
		{
			cout<<"the number of  class room in school";
		 	cin>>class_room;
		 	cout<<endl<<"the number of teachers in your school";
		 	cin>>no_teachers;
		} 
		void  show_data()
		{
			cout<<"number  of class rooms in school"<<class_room;
			cout<<endl<<"number of teahers in school"<<no_teachers;
		}
};
int main()
{
	school *arr;
	int size,sum=0,i;
	cout<<"the no of school"<<endl;
	cin>>size;
	arr=new school[size];
	if(arr==NULL)
	{
		cout<<"memory cannot be allocated";
	}
	else
	{
		cout<<"enter data of  schools";
		for(i=0;i<size;i++)
		{
			arr[i].get_data();
			arr[i].show_data();
		}
		
	}
	
	delete []arr;
	return 0;
}
