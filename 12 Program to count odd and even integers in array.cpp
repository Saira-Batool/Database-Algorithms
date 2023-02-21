//12. Write a program to count odd and even integers in an array.
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
int count=0;
	cout<<"  Total EVEN NUMBERS ARE" ":"<<endl;
	for(int i=0; i<5; i++)
	{
	 if(arr[i]%2==0)
   {
   	count++;
   }
}
cout<<count<<endl;
count=0;
	cout<<" Total ODD NUMBERS ARE" ":"<<endl;
	for(int i=0; i<5; i++)
	{
	 if(arr[i]%2!=0)
   {
   	count++;
   }
}
cout<<count;
}




