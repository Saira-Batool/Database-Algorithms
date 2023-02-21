//3. Write a program that accept inputs 5 number from user. Accept an input number for 
//searching and check that number is present in array or not?
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
		cout<<"NUMBERS ARE: "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t"<<endl;
	}
    int no;
    cout<<"ENTER A NUMBER TO FIND POSITION OF NUMBER: ";
    cin>>no;
    bool flag;
    for(int i=0; i<5; i++)
    {
    	if(no==arr[i])
    	flag++; 
}
	if(flag==1)
	{
		cout<<"NUMBER FOUNDED "<<endl;
	}
	else
	{
		cout<<"NUMBER NOT FOUNDED";
		}
	}
