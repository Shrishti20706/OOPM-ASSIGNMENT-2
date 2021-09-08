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
    cout<<"\n first element : "<<a[0]<<"\t last element : "<<a[n-1];

return 0;
}

