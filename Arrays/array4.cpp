/*calculate standard deviation
Mean(average)= 600 + 470 + 170 + 430 + 300 /5=394
variance(The average of the squared differences from the Mean)=206^2 + 76^2 + (-224)^2 + 36^2 + (-94)^2/5=21704
i.e. variance=(600-374)^2+(470-394)^2 and so on
Standard Deviation(it is the square root of the Variance)=sqrt(21704)=147.32=147*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a[30],n,avg,sum=0,sqd=0,var;
	cout<<"Number of elements: ";
	cin>>n;
	for(int i=0;i<n;i++)//to enter the value in array
	{
		cout<<"Value: ";
		cin>>a[i];
		sum=sum+a[i];//sum+=a[i]
	}
	avg=sum/n;
	cout<<"Sum = "<<sum<<endl;
	cout<<"Average(Mean) = "<<avg<<endl;
	for(int i=0;i<n;i++)//to get squared differences
	{
		sqd=sqd+pow((a[i]-avg),2);
	}
	var=sqd/n;
	cout<<"Variance = "<<var<<endl;
	cout<<"Standard deviation = "<<sqrt(var);
	return 0;
}
