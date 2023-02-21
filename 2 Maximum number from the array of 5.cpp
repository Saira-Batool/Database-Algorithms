//2. Write a program that accept inputs 5 number from user and print the maximum number in 
//the list
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
	int max=arr[0];
	for(int i=1; i<5; i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	cout<<"MAXIMIUM VALUE IS" <<"\t"<<max;
}
