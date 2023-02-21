//11. Write a program to separate odd and even integers in separate arrays.

#include<iostream>
using namespace std;
int main()
{
	 int arr[5];
	 cout<<"Enter array "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arr[i];
	
	}
	
	cout<<"The array of odd integers is" ":"<<endl;
	for(int i=0; i<5; i++)
	{
	 if(arr[i]%2!=0)
   {
   	cout<<arr[i]<<"\t";
   }
}
    cout<<endl;
	cout<<"The array of even integers is" ":"<<endl;
	for(int i=0; i<5; i++)
	{
	 if(arr[i]%2==0)
   {
   	cout<<arr[i]<<"\t";
   }
}
}
