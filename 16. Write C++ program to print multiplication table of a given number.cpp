//16. Write C++ program to print multiplication table of a given number
#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter a number to print multiplication table"<<endl;
	cin>>num;
	for(i=1; i<10; i++)
	cout<<num<<"*"<<i<<"="<<num*i<<endl;
	return 0;
}
