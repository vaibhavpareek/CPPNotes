#include<iostream>
#include<list>
using namespace std;
void display(list <int> &l)
{
	list<int>::iterator p;
	for(p=l.begin();p!=l.end();p++)
	{
		cout<<"\n"<<*p;
	}
}
int main()
{
	list<int> list1;
	list<int> list2(5);
	for(int i=0;i<3;i++)
	list1.push_back(i);
	cout<<"\n displaying first list: ";
	display(list1);
	list<int>::iterator p;
	for(p=list2.begin();p!=list2.end();p++)
	*p=1;
	cout<<"\n displaying second list :";
	display(list2);
	cout<<"\n pushing element at front:";
	list1.push_front(100);
	cout<<"\n poping element from front: ";
	list2.pop_front();
	display(list2);
	cout<<"\n sorting first list";
	list1.sort();
	display(list1);
	cout<<"\n sorting second list";
	list2.sort();
	display(list2);
	cout<<"\nmerging list";
	list1.merge(list2);
	display(list1);
	cout<<"\n reverse the list";
	list1.reverse();
	display(list1);
	
	
	}
