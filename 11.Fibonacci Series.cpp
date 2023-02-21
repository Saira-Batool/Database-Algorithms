//11. Do you know about Fibonacci Series? The series following 1,1,2,3,5,8…, can you t
//print the series utpo n elements?
#include<iostream>
using namespace std;
int main()
{
	int n,x,y,z;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"Print the series upto n-elemenrs"<<endl;
	x=0;
	y=0;
	for(z=1; z<=n; z=x+y)
	{
	cout<<z<<endl;
	x=y;
	y=z;
}
return 0;
}
