
//19. Write C++ program to change string to upper case without strupr
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i;
char str[10];
cout<<"Enter a string"<<endl;
cin>>str;
for(i=0; i<=str[i]; i++)
{
	if(str[i]>='a'&&str[i]<='z')
	{
	str[i]=str[i]-32;
}
cout<<str[i];
}
return 0;

}
