//16. Write a program to find the 2nd largest element in the array

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
	int temp=0;
		cout<<"Sort in descending order:"<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			if(arr[i]<arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
		cout<<arr[i]<<endl;

}
cout<<"second grater integer in array"<<endl;
cout<<arr[1];

}
