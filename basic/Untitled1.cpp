#include<iostream>
using namespace std;
class abc
{int x,y;
public:
	void getdata()
  {
  	cout<<"enter the value of x and y"<<endl;
  	cin>>x>>y>>;
  	
  }
  void sum()
  {int z;
  z=x+y;
  cout<<"the sum is:"<<z<<endl;
  }
  void subtract()
  {int a;
  a=x-y;
  cout<<"subtraction="<<a<<endl;
  }
  void multiply()
  {int b;
  b=x*y;
  cout<<"multiplication="<<b<<endl;
  
  }
  void divide()
  {int c;
  c=x/y;
  cout<<"division="<<c<<endl;
  
  }
};
int main()
{
	
	abc obj1,obj2;
	obj1.getdata();
	obj1.sum();
    obj1.multiply();
    obj1.divide();
    obj1.subtract();
    obj2.getdata()
    obj2.divide();
}
