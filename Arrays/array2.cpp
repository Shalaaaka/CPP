//find the sum and average of elements 
#include<iostream>
using namespace std;
int main()
{
	int a[100],n,sum=0;
	cout<<"Enter the number of elements you want in array: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Value: ";
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"sum is "<<sum<<endl;
	int average=sum/n;
	cout<<"Average of elements in array is "<<average;
}
