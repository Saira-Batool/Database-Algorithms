#include<iostream>
using namespace std;
int main()
{
	int count=0,temp=0,arrA[5],arrB[5],i, arrC[7],mergarr[10],max,arr[5];
		int n;
cout<<"No 11: Print seprate add and even integers in seprate Array"<<endl;
cout<<"No 12: Count odd and even integers in Array"<<endl;
cout<<"No 13: Sort elements of  Array in Ascending oder"<<endl;
cout<<"No 14: Sort elements of  Array in Descending oder"<<endl;
cout<<"No 15: Find second Smallest Element in Array"<<endl;
cout<<"No 16: Find second Largest Element in Array" <<endl;
cout<<"No 17: Check two Arrays are Sort or Not"<<endl;
cout<<"No 18: Merg Two Unsorted Array of Different Lenght"<<endl;
cout<<"No 19: Find Maximum Difference between Two Elements of Array"<<endl;
cout<<"Enter a number from 11 to 19: ";
   cin>>n;
  switch (n)
   {
   
   	case 11:
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
   			cout<<"The array of odd integers is" ":"<<endl;
	for(int i=0; i<5; i++)
	{
	 if(arr[i]%2!=0)
   {
   	cout<<arr[i]<<"\t"<<endl;
   }
}
	cout<<"The array of even integers is" ":"<<endl;
	for(int i=0; i<5; i++)
	{
	 if(arr[i]%2==0)
   {
   	cout<<arr[i]<<"\t"<<endl;
   }
}
  break;
  case 12:
  			int arr[5];
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
	cout<<"  Total EVEN NUMBERS ARE" ":"<<endl;
	for(int i=0; i<5; i++)
	{
	 if(arr[i]%2==0)
   {
   	count++;
   }
}
cout<<count<<endl;
count=0;
	cout<<" Total ODD NUMBERS ARE" ":"<<endl;
	for(int i=0; i<5; i++)
	{
	 if(arr[i]%2!=0)
   {
   	count++;
   }
}
cout<<count;
  break;
  case 13:
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
		cout<<"Sort in ascending order:"<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			if(arr[i]>arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
		cout<<arr[i]<<endl;

}
    break;
    case 14:
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
		cout<<"Sort in descending order:"<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			if(arr[i]<arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
		cout<<arr[i]<<endl;

} 
   break;
   case 15:
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
		cout<<"Sort in ascending order:"<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			if(arr[i]>arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
		cout<<arr[i]<<endl;

}
cout<<"Second smallest no in array"<<endl;
cout<<arr[1];
    break;
    case 16:
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
		cout<<"Sort in descending order:"<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			if(arr[i]<arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
		cout<<arr[i]<<endl;

}
cout<<"second grater integer in array"<<endl;
cout<<arr[1];
     break;
     case 17:
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
	 cout<<"Enter array A"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"ENTER NUMBERS"<<i+1<<":";
		cin>>arrA[i];
	
	}
	cout<<"Enter array B"<<endl;
	for(int i=0; i<5; i++)
	{
			cout<<"ENTER NUMBERS "<<i+1<<":";
		cin>>arrB[i];
	
	} 
	if(arrA[i]==arrB[i])
	{
		cout<<"arrays are same"<<endl;
	}
	else
	{
		cout<<"arrays are not same"<<endl;
		
	}
	break;
	case 18:
	int arrA[5],arrC[10],arrmerg[15];
	int i;
	cout<<"Enter array A:"<<endl;
	for(i=0; i<5; i++)
	{
		cout<<"Elements Array A:"<<i+1 <<":";
		cin>>arrA[i];
		arrmerg[i]=arrA[i];
	}
		cout<<"Enter array C:"<<endl;
		for(i=0; i<10; i++)
	{
		cout<<"Elements of Array C:"<<i+1<<":";
		cin>>arrC[i];
		arrmerg[i+5]=arrC[i];
	}
	   cout<<"Merged Array is:"<<endl;
	   for(i=0; i<15; i++)

	   cout<<arrmerg[i]<<"\t";
			break;
			case 19:
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
		cout<<"Sort in ascending order:"<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			if(arr[i]>arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
		cout<<arr[i]<<endl;

}
cout<<"Maximum difference btween 2 elements in array"<<endl;
 max=arr[4]-arr[0];
cout<<max;
   break;
    default :
 	cout<<"invalid";
 }
 return 0;
 
}
