//17. Write C++ program to find the sum of first and last digit of any number
#include <iostream>
using namespace std;
int main()
{
    int num, sum, firstDigit, lastDigit;
    sum=0;
    cout<<"Enter number:";
    cin>>num;
 
     lastDigit = num % 10;
 
    firstDigit = num;
 
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;
    sum = firstDigit + lastDigit;
 
    cout<<"Sum of first and last digit: "<<sum;
 
    return 0;
}

