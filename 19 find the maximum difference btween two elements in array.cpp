//19. Write a program to find Maximum the difference between two elements in an array.

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
	
	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			if(arr[i]>arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	

}
cout<<"Maximum difference btween 2 elements in array"<<endl;
int max=arr[4]-arr[0];
cout<<max;

}
