//5. Try to swap two numbers without a third variable.
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter Value of a:"<<endl;
	cin>>a;
	cout<<"a="<<a<<endl;
	cout<<"Enter Value of b:"<<endl;
	cin>>b;
	cout<<"b="<<b<<endl;
	cout<<"Values of a and b after swapping without third veriable are:"<<endl;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
	
}
