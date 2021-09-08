#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cout<<"\n Enter size of array : ";
	cin>>n;
	int a[n];
	cout<<"\n Enter element in array :";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<" Reverse array is: ";
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}


return 0;
}

