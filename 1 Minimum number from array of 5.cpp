//1. Write a program that accept inputs 5 number from user and print the minimum number in 
//the list.
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
	}
	int min=arr[0];
	for(int i=1; i<5; i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	cout<<"MINIMIUM NUMBER IS" <<"\t"<<min;
}
