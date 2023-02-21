//17. Write a program to check if two arrays are the same or not.
#include<iostream>
using namespace std;
int main()
{
	 int arrA[5],arrB[5];
	 cout<<"Enter array A"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arrA[i];
	
	}
	cout<<"Enter array B"<<endl;
	for(int i=0; i<5; i++)
	{
			cout<<"ENTER NUMBERS "<<i+1<<":";
		cin>>arrB[i];
	
	} 
	int i;
	if(arrA[i]==arrB[i])
	{
		cout<<"arrays are same"<<endl;
	}
	else
	{
		cout<<"arrays are not same"<<endl;
		
	}
	return 0;
}
