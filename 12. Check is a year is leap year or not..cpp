//12. Check is a year is leap year or not.
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter a year to check that year is leap or not:"<<endl;
	cin>>year;
	if(year%4==0)
	cout<<"leap year"<<endl;
	else 
	cout<<"not leap year"<<endl;
	return 0;
}
