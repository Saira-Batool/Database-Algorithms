//9. Find the factorial of a number.

#include<iostream>
using namespace std;
int main()
{
	int num;
	int c;
	int fact=1;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	for(c=1; c<=num; c++)
	{
		fact=fact*c;
	}
	cout<<"The factorial of number is:"<<endl;
	cout<<fact<<endl;
	return 0;
}
	
