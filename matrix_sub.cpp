#include<iostream>
using namespace std;
int main(void)
{
	int a[3][3],b[3][3],c[3][3],i,j;
	cout<<"enter 9 elements in matrix 1 : \n ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cin>>a[i][j];
	}
    cout<<"enter  9 elements in matrix 2 : \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cin>>b[i][j];
	}
	cout<<" matrix 1:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}

    cout<<" matrix 2:\n";
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}	
	cout<<"addition of matrix 1 and matrix 2 is :\n ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]-b[i][j]<<" ";
		}
		cout<<"\n";
		
	}
	

return 0;
}
