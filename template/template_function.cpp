#include<iostream>
using namespace std;
template <class T>
class mypair
{
	T a,b;
	public:
		mypair(T first,T second)
		{
			a=first;
			b=second;
		}
		
		T getmax();
};
template <class T>
T mypair<T>::getmax()
{
	T retval;
	retval=a>b?a:b;
	return retval;
}
int main()
{
	mypair<int> myobject(100,58);
	mypair<float> myo(103.25,25.36);
	cout<<myo.getmax()<<endl;
	cout<<myobject.getmax();
	return 0; 
}
