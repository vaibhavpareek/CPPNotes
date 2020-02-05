#include<iostream>
using namespace std;
class BC
{
	public:
		void printBC()
		{
			cout<<"\n Printing message in base class"<<endl;
		
		}
		void show()
		{
			cout<<"\n show() of base class "<<endl;
		}
};
class DC:virtual public BC
{
	public:
		void printDC()
		{
		cout<<"\n printing message in derived class "<<endl;
		}
		void show()
		{
			cout<<"\n show() of derived class "<<endl;
		}
		
};
int main()
{
	BC *bptr;
	BC base ;
	bptr=&base;
	//cout<<"bptr points to base objects\n";
	bptr->show();
//derived class
    DC derived;
	bptr=&derived;
	//cout<<"bptr now pointss to derived objects\n";
	//bptr->printDC();//IT WILLL NOT WORK
 	bptr->show();//bptr now points to derived objects	
    //accessing d using a pointer of type derivd class DC
	DC *dptr;
	dptr=&derived;
	//cout<<"dptr is derived typr pointer\n";
	dptr->show();
	/*cout<<"using ((DC*)bptr)\n;
	((DC*)bptr->show();
	((DC*)bptr->printDC();*/
	//dptr=&base;//it will not work
	//dptr->show();//it will not work
	return 0; 
  
  }
