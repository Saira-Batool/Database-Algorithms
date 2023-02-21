//13. C++ Program to convert days to years, weeks and days.
#include<iostream>
using namespace std;
int main()
{
	int no;
	int years,weeks,days;
	cout<<"Enter a number of days"<<endl;
	cin>>days;
	years=days/365;
	cout<<"Years:"<<years<<endl;
	days=days%365;
	cout<<"days:"<<days<<endl;
	weeks=days/7;
	cout<<"weeks:"<<weeks<<endl;
	days=days%7;
	cout<<"days:"<<days<<endl;
    return 0;
}
