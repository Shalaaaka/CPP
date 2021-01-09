//An array is a collection of data that holds fixed number of values of same type. 
//code to print elements of array which are taken from user.
#include<iostream>
using namespace std;
int main()
{
	int a[5],array;
	for(int i=0;i<5;i++)
	{
		cout<<" Enter a value for array : ";
		cin>>a[i];
	}
	cout<<"Array is: "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
	return 0;
}
