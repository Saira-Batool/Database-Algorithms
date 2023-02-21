//4. Write a program that accept inputs 5 number from user. Accept an input number for 
//searching and check how many times that number comes in list?
#include<iostream>
using namespace std;
int main()
{
	int arr[5],count;
	for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
	}
	int no;
	cout<<"ENTER A NUMBER TO CHECK HOW MANY THAT NUMBER REPEAT"<<endl;
	cin>>no;
	for(int i=0; i<5; i++)
	{
	 if(no==arr[i])
   {
   	count++;
   }
}
    cout<<"NUMBER OCCUR "<<count <<"time";
}

