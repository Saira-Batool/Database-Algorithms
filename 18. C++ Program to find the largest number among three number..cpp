//18. C++ Program to find the largest number among three number.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cout<<"Largest number among three number is:"<<endl;
	if(a>b&&a>c)
	{
	cout<<"a is largest no="<<a<<endl;
    }
	else if(b>a&&b>c)
	{
	cout<<"b is largest no="<<b<<endl;
    }
	else
	{
	cout<<"c is largest no="<<c<<endl;
    }
	return 0;
	}
