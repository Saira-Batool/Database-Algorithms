//8. Write a Program to reverse an array
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<":";
		cin>>arr[i];
	}
	for(int i=4; i>=0; i--)
	{
		cout<<arr[i]<<"\t"<<endl;
	}
}
