//14. Write C++ program to convert a string to Lower case.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[]="SAIRA";
	cout<<"The string into lower case is:"<<endl;
	strlwr(str);
	cout<<str;
	return 0;
}
