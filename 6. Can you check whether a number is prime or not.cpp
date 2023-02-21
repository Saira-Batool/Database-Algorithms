//6. Can you check whether a number is prime or not?
#include<iostream>
using namespace std;
int main()
{
	int n,i,count;
	count=0;
	cout<<"Enter a number to check number is prime or not"<<endl;
	cin>>n;
	for( i=1; i<=n; i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
   cout<<"Number is prime"<<endl;
    else
    cout<<"Number is not prime"<<endl;
    return 0;
}
   
	
	


