//15. Write a program to find the 2nd smallest element in the array.
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
		cout<<"Sort in ascending order:"<<endl;
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
		cout<<arr[i]<<endl;

}
cout<<"Second smallest no in array"<<endl;
cout<<arr[1];

}
