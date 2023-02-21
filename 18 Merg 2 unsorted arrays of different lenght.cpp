//18. Write a Program to Merge two unsorted arrays of different lengths.

#include<iostream>
using namespace std;
int main()
{
	int arrA[5],arrC[10],arrmerg[15];
	int i;
	cout<<"Enter array A:"<<endl;
	for(i=0; i<5; i++)
	{
		cout<<"Elements Array A:"<<i+1 <<":";
		cin>>arrA[i];
		arrmerg[i]=arrA[i];
	}
		cout<<"Enter array C:"<<endl;
		for(i=0; i<10; i++)
	{
		cout<<"Elements of Array C:"<<i+1<<":";
		cin>>arrC[i];
		arrmerg[i+5]=arrC[i];
	}
	   cout<<"Merged Array is:"<<endl;
	   for(i=0; i<15; i++)
{
	   cout<<arrmerg[i]<<"\t";
	
}
}
