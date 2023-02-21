//5. Write a Program to print only odd numbers from array list (Using array)
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
		cout<<arr[i]<<"\t"<<endl;
	}
	int no;
	cout<<"ODD NUMBERS ARE" ":"<<endl;
	for(int i=0; i<5; i++)
	{
	 if(arr[i]%2!=0)
   {
   	cout<<arr[i]<<"\t";
   }
}
  
}
