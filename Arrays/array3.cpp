//find the largest number 
#include<iostream>
using namespace std;
int main()
{
	int a[100],n;
	cout<<"Enter number of elements: ";//loop to print elements in array
	cin>>n;
	for(int i=0;i<=(n-1);i++)
	{
		cout<<"Value: ";
		cin>>a[i];
	}
	for(int i=0;i<=(n-1);i++)//loop to find largest element
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	cout<<a[0];
	return 0;
}
