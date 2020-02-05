#include<iostream>
using namespace std;
int main()
{  int i,realloc;
   int *arr;
   arr=new int[5];
   cout<<"enter elements of array"<<endl;
   for(i=0;i<5;i++)
   {
   	cin>>arr[i];
   }
   cout<<"entered values  are";
   for(i=0;i<5;i++)
   {
   	cout<<arr[i];
   }
   cout<<endl<<"enter size of array elements you want tpo add or realloc"<<endl;
   cin>>realloc;
   int *temp;
   temp=new int[5+realloc];
   for(i=0;i<5;i++)
   {
   	temp[i]=arr[i];
   }
   cout<<"enter new elements ";
   for(i=5;i<(realloc+5);i++)
   {
   	cin>>temp[i];
   }
   delete []arr;
   arr=temp;
   //delete []temp;
   cout<<"final elements of array"<<endl;
   for(i=0;i<(realloc+5);i++)
   {
   	cout<<arr[i]<<endl;
	  }   
	  delete []arr;
	  return 0;
}
