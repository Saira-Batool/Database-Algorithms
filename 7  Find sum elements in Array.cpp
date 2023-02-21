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
	int sum;
	cout<<"SUM OF ARRAY ELEMENTS is:";
	for(int i=0; i<5; i++)
	{
	sum=sum+arr[i];
}
{
   	cout<<sum<<endl;

}
  
}
