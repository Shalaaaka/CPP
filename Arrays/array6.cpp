#include<iostream>
using namespace std;
int main()
{
	int row,col,trans[20][20],a[20][20];
	cout<<"Rows: ";
	cin>>row;
	cout<<"Columns: ";
	cin>>col;
	for(int i=0;i<row;i++)//stored values of matrix
	{
		for(int j=0;j<col;j++)
		{
			cout<<"a"<<i+1<<j+1<<":";
			cin>>a[i][j];
		}
	}
	cout<<"MATRIX:"<<endl;//print matrix
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(int i=0;i<row;i++)//transpose matrix
	{
		for(int j=0;j<col;j++)
		{
			trans[j][i]=a[i][j];
		}
	}
	cout<<"TRANSPOSE MATRIX:"<<endl;
	for(int i=0;i<col;i++)//print transpose matrix //first col
	{
		for(int j=0;j<row;j++)//then row
		{
			cout<<trans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
