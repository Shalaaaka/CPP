//addition of two matrix
#include<iostream>
using namespace std;
int main()
{
	int row,col,a[20][20],b[20][20],sum[20][20],i,j;
	cout<<"Number of rows: ";
	cin>>row;
	cout<<"Number of columns: ";
	cin>>col;
	for(i=0;i<row;i++)//first matrix
	{
		for(j=0;j<col;j++)
		{
			cout<<"a"<<i+1<<j+1<<":";
			cin>>a[i][j];
		}
	}
	for(i=0;i<row;i++)//second matrix
	{
		for(j=0;j<col;j++)
		{
			cout<<"b"<<i+1<<j+1<<":";
			cin>>b[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"Addition: "<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			cout<<sum[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
