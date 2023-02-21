//9. Write a program to print all unique elements in an array.

#include<iostream>
using namespace std;
int main()
{
	int count;
	int arr[5]={1,1,2,2,3};
	cout<<"Elements of array are:"<<endl;
	{
		for(int i=0; i<5; i++)
		{
		cout<<arr[i]<<"\t"<<endl;
	}
	}
	cout<<"Print all unique elements of array:"<<endl;
	for(int i=0; i<5; i++)
	{
	   count=0;
		for(int j=0; j<5; j++)
		if(i!=j)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
	
     if(count==0)
     {
     cout<<"\t"<<arr[i]<<endl;
      }
  }
}
