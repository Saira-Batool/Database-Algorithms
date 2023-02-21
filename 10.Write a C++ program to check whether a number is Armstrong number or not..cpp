//10.Write a C++ program to check whether a number is Armstrong number or not.
#include<iostream>
using namespace std;
int main()
{
	int num,arm,r,i;
	arm=0;
	cout<<"Enter a Number:"<<endl;
	cin>>num;
	i=num;
	while(num>0)
	{
		r=num%10;
		arm=(r*r*r)+arm;
		num=num/10;
	}
	if(i==arm)
	{
		cout<<"Number is Armstrong"<<endl;
	}
	else
	{
		cout<<"Number is Not Armstrong"<<endl;
	}
	
}
