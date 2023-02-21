#include<iostream>
using namespace std;
int main()
{
	int min,max,no,sum,count,arr[5];
	int n;
cout<<"No 1: Print Manimum number in Array"<<endl;
cout<<"No 2: Print Maximum number in Array"<<endl;
cout<<"No 3: Print number is present in Array"<<endl;
cout<<"No 4: Print How many times number comes in Array"<<endl;
cout<<"No 5: Print Odd numbers in Array"<<endl;
cout<<"No 6: Print Even numbers in Array"<<endl;
cout<<"No 7: Print Sum of all numbers in Array"<<endl;
cout<<"No 8: Print Reverse numbers in Array"<<endl;
cout<<"No 9: Print unique numbers in Array"<<endl;
cout<<"Enter a numberf from 1 to 9:";
   cin>>n;
   switch (n)
   {
   
   	case 1:
   			for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
		cout<<endl;
	}
  	 min=arr[0];
	for(int i=1; i<5; i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	cout<<"MINIMIUM NUMBER IS" <<"\t"<<min;

   break;
   case 2:
   		for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
		cout<<endl;
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
	}
	 max=arr[0];
	for(int i=1; i<5; i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	cout<<"MAXIMIUM NUMBER IS" <<"\t"<<max;

   break;
   case 3:
   		for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
		cout<<endl;
	}
    cout<<" Enter a Number to check Number Present in Array ";
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
	
	break;
	case 4:
			for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
		cout<<endl;
	}
	cout<<"ENTER A NUMBER TO CHECK HOW MANY TIMES THAT NUMBER COMES"<<endl;
	cin>>no;
	for(int i=0; i<5; i++)
	{
	 if(no==arr[i])
   {
   	count++;
   }
}
    cout<<"NUMBER COMES"<<count <<"time";

     break;
     case 5:
     		for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
		cout<<endl;
	}
	cout<<"ODD NUMBERS ARE" ":"<<endl;
	for(int i=0; i<5; i++)
	{
	 if(arr[i]%2!=0)
   {
   	cout<<arr[i]<<"\t";
   }
}
   break; 
   case 6:
   		for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
		cout<<endl;
	}
	cout<<"EVEN NUMBERS ARE" ":"<<endl;
	for(int i=0; i<5; i++)
	{
	 if(arr[i]%2==0)
   {
   	cout<<arr[i]<<"\t";
   }
}
  
 
   break;
   case 7:
   		for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
		cout<<endl;
	}
	cout<<"SUM OF ARRAY ELEMENTS is:";
	for(int i=0; i<5; i++)
	{
	sum=sum+arr[i];
}
{
   	cout<<sum<<endl;

}
  break;
  case 8:
  		for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
		cout<<endl;
	}
	for(int i=4; i>=0; i--)
	{
		cout<<arr[i]<<"\t"<<endl;
	}

    break;
    case 9:
    		for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
		cout<<endl;
	}
		for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
	
	}
		cout<<endl<<"The unique Elements of Array are:";
	for(int i=0; i<5; i++)
	{
     	count=0;
		for(int j=0; j<5; j++)
		{
			if(i!=j)
			{
				if(arr[i]==arr[j])
				{
					count++;
				}
			}
		}
	  if(count==0)
	  {
	  	cout<<arr[i]<<"\t";
	  }
}
  
   break;
    default :
 	cout<<"invalid";
 }
 return 0;
}
	

