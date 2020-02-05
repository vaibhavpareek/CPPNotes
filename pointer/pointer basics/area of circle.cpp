#include<iostream>
using namespace std;
 int main()
 {
 	float r,area,*radius,*a;
     radius=&r;
cout<<"enter value of radius"<<endl;
     a=&area;
     cin>>*radius;
     *a=3.14*(*radius)*(*radius);
     cout<<"the area of circle is : "<<*a<<endl;
     
 	
 	
 }
