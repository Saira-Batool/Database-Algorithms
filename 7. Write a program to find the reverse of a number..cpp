//7. Write a program to find the reverse of a number.
#include<iostream>
using namespace std;
int main()
{
	int n,rev;
	cout<<"Enter a number to find reverse:"<<endl;
	cin>>n;
	cout<<"Reverse of number is:"<<endl;
	while(n>0)
	{
	rev=n%10;
	cout<<rev;
	n=n/10;
}
	return 0;
}
