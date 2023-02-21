//4. Try to swap two numbers with a third variable.
#include<iostream>
using namespace std;
int main()
{
	cout<<"value of a and b before swapping"<<endl;
	int a=5;
	cout<<"a="<<a<<endl;
	int b=10;
   cout<<"b="<<b<<endl;
	int temp=0;
	cout<<"The value of a and b After swapping"<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
	
}
