//8. Now when you know to reverse a number, can you try to check whether a number is a 
//palindrome or not?
#include<iostream>
using namespace std;
int main()
{
 int n,rem,rev,temp;
 rev=0;
 cout<<"Enter number to check that number is palindrome or not:"<<endl;
 cin>>n;
 temp=n;
 while(n>0)
 {
 	rem=n%10;
 	rev=(rev*10)+rem;
 	n=n/10;
 }
 if(rev==temp)
 cout<<"The number is palindrome"<<endl;
 else
 cout<<" The number is NOT a palindrome"<<endl;
 return 0;
}
	

